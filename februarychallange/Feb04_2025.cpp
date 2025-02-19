class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int max_sum=nums[0], sum=0;
        int i=0;
        while(i<nums.size()-1){
            max_sum= max(max_sum, nums[i]);
                if(nums[i]<nums[i+1] && sum!=0){
                    sum += nums[i+1]; 
                    max_sum= max(max_sum,sum);
                }else if(nums[i]<nums[i+1] && sum==0){
                    sum=nums[i]+nums[i+1];
                    max_sum= max(max_sum,sum);
                }else{
                    sum=0;
                }
                i++;
        }
          return max_sum;
      
        
    }
};
//https://leetcode.com/problems/maximum-ascending-subarray-sum/
