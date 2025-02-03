class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mpp;
        vector<int> result;
        int n = nums.size();
        for(int i=0; i<n ;i++){
            mpp[nums[i]]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for (auto& [num, freq] : mpp) {
            minHeap.push({freq, num}); 
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }
        while (!minHeap.empty()) {
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return result;
    }
};