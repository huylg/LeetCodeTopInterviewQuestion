class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
    int n = prices.size();
    if(n==0) return 0;
    int buyDay = prices[0];
    for(int i= 0;i<n;i++){
        if(buyDay > prices[i]) buyDay = prices[i];
        else {
            result = max(result,prices[i]-buyDay);
        }
    }
    return result;
    }
};
