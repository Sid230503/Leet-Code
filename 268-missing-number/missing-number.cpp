class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1=0,xor2=0,a=nums.size();
        for(int i=0; i<a; i++){
            xor1^=nums[i];
            xor2^=i;
        }xor2^=a;
        return xor1^xor2;  
    }
};