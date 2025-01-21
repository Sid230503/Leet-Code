class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mpp;
        map<char,char> mpp2;
        int n= s.length();
        if(t.length() != n) return false;
        for(int i= 0; i< n; i++){
            if(mpp.find(s[i]) != mpp.end()){
                if( mpp[s[i]] != t[i]) return false;
            }
            else if(mpp2.find(t[i]) != mpp2.end()){
                if(mpp2[t[i]] != s[i]) return false;
            }
            else{
                mpp[s[i]] = t[i];
                mpp2[t[i]] = s[i];
            }
        }return true;
    }
};