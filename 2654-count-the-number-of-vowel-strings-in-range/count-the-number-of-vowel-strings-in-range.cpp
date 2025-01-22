class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        auto isVowel = [](char ch ){
            return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
        };
        int count =0;
        for(int i= left; i<=right; i++){
            string w1 = words[i];
            int n = w1.size();
            if(isVowel(w1[0]) && isVowel(w1[n-1])){
                count++;
            }
        }return count;
    }
};