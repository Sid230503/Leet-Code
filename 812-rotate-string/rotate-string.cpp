class Solution {
public:
    bool rotateString(string s, string goal) {
        int k = 0;
        if(s.size()!= goal.size()) return false;
        while(k < s.size()){
            string s2=s;
            reverse(s2.begin(), s2.begin()+k);
            reverse(s2.begin()+k, s2.end());
            reverse(s2.begin(),s2.end());
            if(s2 == goal) return true;
            k++;
        }return false;
    }
};