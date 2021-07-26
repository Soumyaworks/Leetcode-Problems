int maxProfit(vector<int>& prices) {
       int profit=0;
        //int i;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1])
                profit+=prices[i]-prices[i-1];
        }
        return profit;
    }
