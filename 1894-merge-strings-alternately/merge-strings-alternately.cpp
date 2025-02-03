class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string st="";
        int x = word1.size();
        int y = word2.size();
        int n = min(x,y);
        int i =0;
        while(i < n){
            st += word1[i];
            st += word2[i];
            i++;
        }
        while(i < x){
            st += word1[i];
            i++;
        }
        while(i < y){
            st +=word2[i];
            i++;
        }
        return st;
    }
};