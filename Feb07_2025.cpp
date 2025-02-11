class Solution { 
public:
    vector<int> queryResults(int limit, vector<vector<int>>& q) {
        unordered_map<int,int> indexColors;
        unordered_map<int,int>colorCounts;
        vector<int>ans;
        
        for(int i=0; i<q.size();i++){
              if(indexColors.find(q[i][0]) != indexColors.end()) {
                int prevColor = indexColors[q[i][0]];
                if(colorCounts[prevColor] > 0) {
                    colorCounts[prevColor]--;
                    if(colorCounts[prevColor] == 0) {
                        colorCounts.erase(prevColor); // Remove it if count reaches 0
                    }
                }
            }          
            indexColors[q[i][0]] = q[i][1];
            colorCounts[q[i][1]]++;
            ans.push_back(colorCounts.size());
        }
        return ans;
    }
};
//https://leetcode.com/problems/find-the-number-of-distinct-colors-among-the-balls/
