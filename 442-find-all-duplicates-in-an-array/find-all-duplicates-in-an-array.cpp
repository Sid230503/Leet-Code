class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicate;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1; i<n;i++){
            if(nums[i]==nums[i-1]){
                duplicate.push_back(nums[i]);
            }
        }return duplicate;
    }
};