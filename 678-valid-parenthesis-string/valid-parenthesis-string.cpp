class Solution {
public:
    bool checkValidString(string s) {
        stack<int> star;  
        stack<int> paren; 
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(')
                paren.push(i);
            else if (s[i] == '*')
                star.push(i);
            else {
                if (!paren.empty())
                    paren.pop();
                else if (!star.empty())
                    star.pop();
                else 
                    return false;
            }
        }
        // Ensure '*' can balance any remaining '('
        while (!paren.empty() && !star.empty()) {
            if (paren.top() > star.top()) // '(' appears after '*', invalid
                return false;
            paren.pop();
            star.pop();
        }
        return paren.empty(); // If any '(' remains unbalanced, return false
    }
};
