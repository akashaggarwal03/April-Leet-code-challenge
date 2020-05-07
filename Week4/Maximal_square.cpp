class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int row= matrix.size();
          if(row==0)
            return 0;
        int col= matrix[0].size();
      
        
        vector<vector<int> >dp(row+1,vector<int>(col+1,0));
        int ans=0;
        for(int i=1;i<=row;i++)
        {
            
            for(int j=1;j<=col;j++)
            {
                
                char ch= matrix[i-1][j-1];
                
                if(ch=='1')
                {
                    dp[i][j]= 1+ min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1])); 
                    if(ans<dp[i][j])
                        ans=dp[i][j];
                }
               
            }
            
            
        }
        return ans*ans;
        
        
        
        
        
        
    }
};