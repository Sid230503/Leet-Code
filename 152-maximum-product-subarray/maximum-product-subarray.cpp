class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=LONG_MIN;
        int n = nums.size();
        if(n==1) return nums[0];
        for(int i=0; i<n; i++){
            int product=1;
            for(int j =i; j<n; j++){
                product *=  nums[j];
                maxi = max(maxi,product);
            }
        }return maxi;
    }
};