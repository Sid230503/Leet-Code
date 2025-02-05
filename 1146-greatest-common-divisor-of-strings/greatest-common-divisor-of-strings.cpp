class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
    if (str1 + str2 != str2 + str1)  
        return "";  // If concatenation order differs, no common divisor
    
        int gcd_length = gcd(str1.size(), str2.size());  
        return str1.substr(0, gcd_length);  // Return prefix of gcd length
    }
};