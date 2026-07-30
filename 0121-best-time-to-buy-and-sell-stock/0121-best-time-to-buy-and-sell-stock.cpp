class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp = 0;
        int mini = prices[0];
        for(int i = 0; i < prices.size(); i++){
            maxp = max(maxp, prices[i]-mini);
            mini = min(mini, prices[i]);
        }
        return maxp;
    }
};