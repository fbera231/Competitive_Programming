class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1; j<nums.size();j++){
                m[nums[i]*nums[j]]++;
            }
        }
   for (const auto & [key, value] : m){
        if(value>1)
        sum+= value*(value-1)*4;
   }
   return sum;
    }
};
//https://leetcode.com/problems/tuple-with-same-product/
