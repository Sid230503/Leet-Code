class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        while(left < right){
            int mid = (left+right)/2;
            if (mid%2 == 1) 
                mid--; // Ensures the first occurence of the element
            if(nums[mid]==nums[mid+1]){ // To check the position of non-duplicate element
                left = mid +2; // This if condition is true means element is in right half
            }
            else{
                right = mid; // This means element is in left half
            }
        }return nums[left]; //returns the non-duplicate element
    }
};