//leetcode problem => 136. Single Number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int  ans = 0;
       
       for(int val:nums){
        ans = ans ^ val;
       }
       return ans;

        
    }
};