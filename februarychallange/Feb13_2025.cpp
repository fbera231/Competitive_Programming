class Solution {
public:
    int minOperations1(vector<int>& v, int k) {
       priority_queue<long, vector<long>,greater<long>> pq(v.begin(), v.end());
       int cnt=0;
        while(pq.top()<k && pq.size()>1){
            cnt++;
            long x=pq.top(); pq.pop();
            long y=pq.top(); pq.pop();
            long z= x*2+y;
            pq.push(z);
        }
        return cnt;
    } // this one passes and the same approach as in the editorial
    int minOperations2(vector<int>& v, int k) {
        sort(v.begin(), v.end());  
        int cnt = 0;         
        while (v[0] < k && v.size() > 1) {
            cnt++;
            long y= v[0]; long z= v[1];
            long  x = y * 2 + z;    
            v.erase(v.begin());       
            v.erase(v.begin());    
            v.insert(upper_bound(v.begin(), v.end(), x), x);
        }      
        return cnt;
    }      // this one gets time limit for 4 cases


};
// https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-ii/description/?envType=daily-question&envId=2025-02-13
