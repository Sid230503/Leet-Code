class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size(), firstocc=-1, lastocc=-1;
        // vector<int> result;
        for(int i = 0; i<n; i++){
            if(nums[i]== target){
                firstocc=i;
                // result.push_back(firstocc);
                break;
            }
        }if(firstocc== -1) return {-1,-1};
        for(int i= firstocc; i<n; i++){
            if(nums[i]== target){
                lastocc = i;
                // result.push_back(lastocc);
            }
         }//if(!find(nums.begin(),nums.end(),target)) return [-1,-1];
        return {firstocc,lastocc};
    }
};