class Solution {
public:
    string getHappyString(int n, int k) {
         unordered_map<char, char> nextSmallest = {
            {'a', 'b'}, {'b', 'a'}, {'c', 'a'}};
        unordered_map<char, char> nextGreatest = {
            {'a', 'c'}, {'b', 'c'}, {'c', 'b'}};
        string ans="";
        k--;
        int len=1;
        int turnChange = pow(2, n-1);
        int turn = k/turnChange;
        if(turn>=3) return ans;
        ans+= 'a'+ turn; 
        k-= turn*turnChange;

        while (len<n){
            char ch= ans[len-1];
            // instead of line 27  k%= turnChange; this also works
            turnChange/=2; 
            int turn = k/turnChange;
           if(turn ==0){
            ans+= nextSmallest[ch];
           }else{
            ans+=nextGreatest[ch];
           }
            k-= turn*turnChange;
            len++;
        }
        return ans;

    }
};
// https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/
