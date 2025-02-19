class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {        
        for(int i=0; i<nums.size()-1; i++){
            if((nums[i] ^ nums[i+1]) % 2){
                continue;
            }else return false;
        }
        return true;
    }
};
//https://leetcode.com/problems/special-array-i/
