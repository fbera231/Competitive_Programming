//https://leetcode.com/problems/find-unique-binary-string/
class Solution {
public:
// 111 011 100 001 101
    string xoring(string a, string b, int n){
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            ans += "0";
        else
            ans += "1";
    }
    return ans;
}
    string findDifferentBinaryString(vector<string>& nums) {
        int n= nums[0].size();
        
        string ans= "";
        for(int i=0; i<n; ++i){
            ans+="1";
        }
        for(int i=0;i< nums.size(); ++i){
            ans= xoring(ans, nums[i],n);
        }
        return ans;
    }
};
