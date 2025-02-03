class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int maxwater = 0;
        while(left < right){
            if(height[left] > height[right]){
                maxwater = max(maxwater,min(height[left],height[right]) * abs(right - left));
                right--;
                
            }
            else{
                maxwater = max(maxwater,min(height[left],height[right]) * abs(right - left));
                left++;
            }
        }return maxwater;
    }
};