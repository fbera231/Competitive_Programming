class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0; i<nums.size(); ++i){
            m[nums[i]-i]++;
        }
        long long pairs= nums.size()*(nums.size()+1)/2;
        for(auto [res, num]: m){
            pairs-= (long long) num *(num+1)/2;
        }
        return pairs;
    }
};
//https://leetcode.com/problems/count-number-of-bad-pairs/description/
