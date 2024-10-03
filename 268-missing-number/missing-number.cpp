class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a = nums.size();
        vector<int> hash(a + 1,0);
        for(int i=0; i<a; i++){
            hash[nums[i]]++;
        }
        for(int i=0; i<=a; i++){
            if(hash[i]==0) return i;
        }return -1;  
    }
};