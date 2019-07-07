//https://leetcode.com/problems/min-stack/submissions/
//155. Min Stack
//155-Min-Stack.cpp

class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        v.push_back(x);
        
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        return v.back();
    }
    
    int getMin() {
        int min;
        if(v.size() > 0)
            min=v[0];
        else 
            return NULL;
        
        for(auto &num: v)
        {
            if( num < min)
                min=num;
        }
        return min;
    }

private:
    vector<int> v; 

};


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */