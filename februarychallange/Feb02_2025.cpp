class Solution {
public:
    bool check(vector<int>& nums) {
        if(nums.size()<3) return true;
        int cnt=0;
            int i=0,j=1,k=0;
            while(k<nums.size()){
                if(nums[i]>nums[j]){
                    cnt++;                    
                }
                i=(i+1)% nums.size();
                j=(j+1)% nums.size();
                k++;
            } 
     
        if(cnt>1){
            return false;
        } else return true;
    }
};
//https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
