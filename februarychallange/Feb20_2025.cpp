class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans;
        for (int i = 0; i < nums.size(); i++) {
            char curr = nums[i][i];
            ans += curr == '0' ? '1' : '0';
        }        
        return ans;
    }
};
// https://leetcode.com/problems/find-unique-binary-string/ 
// see Cantor's Diagonal Argument 
