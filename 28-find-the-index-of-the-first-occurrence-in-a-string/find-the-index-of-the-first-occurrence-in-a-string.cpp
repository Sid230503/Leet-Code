class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.contains(needle)) return haystack.find(needle);
        return -1;
    }
};