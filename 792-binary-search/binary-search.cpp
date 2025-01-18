class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1, mid;
        
        while (left <= right) {  // Fixed condition
            mid = (left + right) / 2;  // Avoid overflow
            
            if (nums[mid] == target) return mid;
            else if (target > nums[mid]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return -1;  // Target not found
    }
};
