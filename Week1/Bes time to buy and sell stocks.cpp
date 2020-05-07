class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        const int n= prices.size();
        
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            if(prices[i+1]>prices[i])
                ans= ans+prices[i+1]-prices[i];
            
        }
        return ans;
    }
};