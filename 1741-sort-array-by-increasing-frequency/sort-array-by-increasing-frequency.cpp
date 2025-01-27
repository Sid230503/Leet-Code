class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();
        for(int num : nums){
            mp[num]++;
        }

        map<int , vector<int>> freq;
        for(auto &it: mp){
            freq[it.second].push_back(it.first);
        }

        vector<int> ans;
        for(auto &it: freq){
            if(it.second.size() > 1){
                sort(it.second.rbegin(), it.second.rend());
            }
            for(auto &num: it.second){
                for(int i=0; i<it.first; i++) ans.push_back(num);
            }
        }return ans;
    }
};