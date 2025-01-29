class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size(), m= s.size();
        int i = 0, j = 0, count = 0;
        sort(s.begin(),s.end());
        sort(g.begin(), g.end());
        while(i<n && j<m){
            if(s[j] >= g[i]){
                count++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }return count;
    }
};