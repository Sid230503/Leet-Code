class Solution {
public:
    bool isVowel(char c) {
        string vowels = "aeiouAEIOU";
        return vowels.find(c) != string::npos;
    }
    string reverseVowels(string s) {
        int n = s.length();
        int left = 0, right = n-1;
        while(left < right){
            if(isVowel(s[left]) == true && isVowel(s[right]) == true){
                swap(s[left], s[right]);
            }
            if(isVowel(s[left]) == true && isVowel(s[right]) == false) right--;
            else if(isVowel(s[left]) == false && isVowel(s[right]) == true) left++;
            else{
                left++;
                right--;
            }
        }return s;
    }
};