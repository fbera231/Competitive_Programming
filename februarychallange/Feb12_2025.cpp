class Solution { 
private:
    int sumOfDigits(int n){
        int sum=0;
        while(n){
            sum+= n%10;
            n/=10;
        }
        return sum;
    }
public:   
    int maximumSum(vector<int>& nums) {
       unordered_map<int , priority_queue<int>> umap;
       set<int> sums;
       for(int i: nums){
            int x= sumOfDigits(i);
            sums.insert(x);
            umap[x].push(i);
       } 
       int maximum=-1, cur_max=-1;
       for (const auto& [key, pq] : umap) { 
            if(umap[key].size() ==1){
            continue;
        }
        cur_max= umap[key].top();
        umap[key].pop();
        cur_max+= umap[key].top();
        maximum= max(cur_max, maximum);
       }
       return maximum;
    }
};

//https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits/description/
