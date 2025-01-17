class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> valueIndexMap;
        int n= nums.size();

        for(int i=0; i<n; i++){
            int value = nums[i];
            if( valueIndexMap.find(value) != valueIndexMap.end()){
                if(abs(i-valueIndexMap[value]) <= k) return true;
            }valueIndexMap[value]=i;
        }return false;
    }
};