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
                else {
                    return false;
                }
            }
        }
        while (!star.empty() && !paren.empty()) {
            if (paren.top() > star.top())
                return false;
            star.pop();
            paren.pop();
        }
        return paren.empty();
    }
};