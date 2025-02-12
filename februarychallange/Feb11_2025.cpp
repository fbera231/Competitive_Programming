class Solution {
public:
    string removeOccurrences(string s, string part) {
      int it = s.find(part);
        while(it!=-1){
           s.erase(it,part.length());
           it = s.find(part);
        }
        return s;
    }
};
//https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/
