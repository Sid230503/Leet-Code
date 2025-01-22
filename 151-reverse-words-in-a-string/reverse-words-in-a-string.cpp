class Solution {
public:
    string reverseWords(string s) {
       int n=s.size(),left=0,right=0,wordStart=0;
       reverse(s.begin(),s.end());
       while(right < n){
        while(right <n && s[right]==' ') right++;
        if(right==n) break;
        if (wordStart) s[left++] = ' ';
        int start = left; 
        while (right < n && s[right] != ' ') s[left++] = s[right++];
        reverse(s.begin() + start, s.begin() + left);
        wordStart = 1;
       }
       s.resize(left);
       return s;
    }
};