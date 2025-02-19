class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2){
            return true;
        }
    char arr1[2];
    char arr2[2];
    int cnt=0;
        for(int i=0; i<s1.size(); i++){
                if(s1[i]==s2[i]){
                    continue;
                }else if(cnt<2) {                             
                    arr1[cnt]=s1[i];
                    arr2[cnt]=s2[i];
                     cnt++;   
                }else {
                    cnt++;
                    break;
                }

        }
        if(cnt==0 || (cnt==2 && arr1[0]==arr2[1] && arr1[1]==arr2[0])) return true;
        return false;
    }
};
//https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/
