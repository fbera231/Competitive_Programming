class Solution {
public:

    string clearDigits(string s) {
        int i=1;
        while(i<s.length()){   
            if(isdigit(s[i])){
                 s.erase(s.begin()+i-1,2);        
                    i--;
                 
            }else{
                    i++;
            }           
        }
        return s;
    }
};
//https://leetcode.com/problems/clear-digits/description/
