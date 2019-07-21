//https://leetcode.com/problems/nim-game/
//292. Nim Game
//292-Nim-Game.cpp

class Solution {
public:
    bool canWinNim(int n) {
        return n % 4 != 0;
    }
};