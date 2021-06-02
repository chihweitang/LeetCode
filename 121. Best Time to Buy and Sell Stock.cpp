class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2) 
            return 0;  
        
        int maxp = 0, minp= prices[0];

        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] > prices[i - 1]) {
                maxp = max(maxp, prices[i] - minp);       
            } else {
                minp = min(minp, prices[i]);
            }
        }
        return maxp;
    }
};
