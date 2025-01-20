class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int diff=nums[0];
        int ans=0;
        for(int i=1;i<nums.size();i++)
        {
            diff=min(diff,nums[i]);
            ans=max(ans,nums[i]-diff);
        }
        return (ans==0)?-1:ans;
    }

};