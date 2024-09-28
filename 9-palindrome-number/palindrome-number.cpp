class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long rev = 0;
        long long tem = x;
        while(tem != 0){
            int remainder = tem % 10;
            rev = rev * 10 + remainder;
            tem = tem/10;
        }
        return (rev == x);
    }
};