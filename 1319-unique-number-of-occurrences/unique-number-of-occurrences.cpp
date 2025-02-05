class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mpp;
        for(int i =0; i<arr.size(); i++){
            mpp[arr[i]]++;
        }
        vector<int> vec;
        for(auto it : mpp){
            vec.push_back(it.second);
        }
        // sort(vec.begin(), vec.end());
        if(vec.size()==1) return true;
        for(int i = 1; i<vec.size(); i++){
            if (find(vec.begin(), vec.begin() + i, vec[i]) != vec.begin() + i) return false;
        }return true;
    }
};