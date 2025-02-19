class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if(nums.size()==1) 
        return 1;
        int len=1, max_len=1;
        
        for(int i=0; i<nums.size()-1; ++i){
            if(nums[i]<nums[i+1]){
                len++;
                max_len= max(len,max_len);
            }else len=1;
        }
        len=1;
        for(int i=0; i<nums.size()-1; ++i){
            if(nums[i]>nums[i+1]){
                len++;
                max_len= max(len,max_len);
            }else len=1;
        }
        return max_len;
    }
};
//https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/description/
