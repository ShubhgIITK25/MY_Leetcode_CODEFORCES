class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minb =  prices[0];
        int maxp = 0;
        for(int i = 0; i < prices.size(); i++){
            maxp = max(maxp, prices[i]-minb);
            minb = min(minb, prices[i]);
        }
        return maxp;
    }
};