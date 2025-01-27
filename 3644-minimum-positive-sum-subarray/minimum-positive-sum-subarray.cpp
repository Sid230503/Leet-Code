class Solution {
public:
int minimumSumSubarray(vector<int>& nums, int l, int r) {
    int n = nums.size();
    int minSum = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        int currentSum = 0;
        
        for (int j = i; j < n; j++) {
            currentSum += nums[j];
            int subarrayLength = j - i + 1;
            
            // Check if the subarray length is between l and r and if sum is positive
            if (subarrayLength >= l && subarrayLength <= r && currentSum > 0) {
                minSum = min(minSum, currentSum);
            }
        }
    }
    
    // If no subarray with positive sum found, return -1
    return minSum == INT_MAX ? -1 : minSum;
}
};