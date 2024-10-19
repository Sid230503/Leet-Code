class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0], maxProfit = 0;
        int cost;
        for(int i = 0; i<prices.size(); i++){
            cost = prices[i]-mini;
            maxProfit = max(cost,maxProfit);
            mini = min(mini,prices[i]);
        }return maxProfit;
    }
};