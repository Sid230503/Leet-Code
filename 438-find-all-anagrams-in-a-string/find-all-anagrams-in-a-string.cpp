class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> index;
        int n = s.size(), m = p.size();
        
        if (m > n) return index;  // If p is larger than s, return an empty list

        // Frequency count for string p
        vector<int> pCount(26, 0), sCount(26, 0);

        // Populate frequency count for p
        for (char c : p) {
            pCount[c - 'a']++;
        }

        // Sliding window approach
        for (int i = 0; i < n; i++) {
            // Add the current character to the sliding window
            sCount[s[i] - 'a']++;

            // Once the window size is greater than or equal to m, remove the character at the left of the window
            if (i >= m) {
                sCount[s[i - m] - 'a']--;
            }

            // If the current window matches the frequency count of p, it's an anagram
            if (sCount == pCount) {
                index.push_back(i - m + 1);  // Add the starting index of the anagram
            }
        }

        return index;
    }
};