class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int bestBuy=prices[0];

        for(int i=1;i<prices.size();i++){
            if(prices[i]>bestBuy){
                maxProfit= max(prices[i]-bestBuy,maxProfit);
            }else{
                bestBuy=min(bestBuy,prices[i]);
            }
        }
        return maxProfit;
    }
};