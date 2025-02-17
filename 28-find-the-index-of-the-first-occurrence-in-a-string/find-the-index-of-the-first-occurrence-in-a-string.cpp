class Solution {
public:
    int strStr(string haystack, string needle) {
        const int m = haystack.length();
        const int n = needle.length();

        for (int i = 0; i < m; i++){
            int j = 0;
            for (; j < n; j++){
                if(needle[j] != haystack[i+j]) break;
            }
            if(j == n) return i;
        }
        return -1;
    }
};