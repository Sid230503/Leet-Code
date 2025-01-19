class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstocc = findFirst(nums, target);
        int lastocc = findLast(nums, target);
        if (firstocc == -1 || nums[firstocc] != target) return {-1, -1};

        return {firstocc, lastocc};
    }

private:
    int findFirst(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, first = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= target) {
                first = mid; 
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }return (first != -1 && nums[first] == target) ? first : -1;
    }

    int findLast(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, last = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > target) {
                right = mid - 1;  
            } else {
                last = mid;
                left = mid + 1;
            }
        }
        return last;
    }
};