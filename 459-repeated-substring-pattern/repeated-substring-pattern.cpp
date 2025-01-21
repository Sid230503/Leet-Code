class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int i =1; i <= n/2; i++){
            if(n%i==0){
            string s2 = s.substr(0,i);
            string s3 = "";
            for(int j = 0; j<n/i; j++){
                s3 += s2;
            }
            if(s3==s) return true;
        }
        }return false;
    }
};