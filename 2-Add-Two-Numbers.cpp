//2. Add Two Numbers
//https://leetcode.com/problems/add-two-numbers/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    
    private:
    // int size;                // size是用來記錄Linked list的長度, 非必要
    ListNode *first;            // list的第一個node
    
public:    
    void Push_back(int x)
    {

        ListNode *newNode = new ListNode(x);   // 配置新的記憶體

        if (first == 0) {                      // 若list沒有node, 令newNode為first
            first = newNode;
            return;
        }

        ListNode *current = first;
        while (current->next != 0) {           // Traversal
            current = current->next;
        }
        current->next = newNode;               // 將newNode接在list的尾巴
    }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {       
        ListNode *ptr1, *ptr2;
        ptr1=l1;
        ptr2=l2;
        int number1=0, number2=0, sum=0;
        
        int carry=0;
        while((ptr1 != NULL) || (ptr2 != NULL))
        {
            
            number1= (ptr1 != NULL)? ptr1->val: 0;
            number2= (ptr2 != NULL)? ptr2->val: 0;
            
            sum=carry + number1 + number2;            
            Push_back(sum % 10);            
            carry=sum /10;
           
            if(ptr1 != NULL) ptr1 = ptr1->next;            
            if(ptr2 != NULL) ptr2 = ptr2->next;
        }   
        if(carry)
            Push_back(carry);
        
        
        return first;
    }
};