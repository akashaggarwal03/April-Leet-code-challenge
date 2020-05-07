class Solution {
public:
    int longestCommonSubsequence(string s, string t) {
        
        
        
          const int len1= s.length();
    const int len2=t.length();

    int dp[len1+1][len2+1];

    for(int row=0;row<=len1;row++)
        dp[row][0]=0;
    for(int col=0;col<=len2;col++)
        dp[0][col]=0;


    for(int i=1;i<=len1;i++)
    {
        for(int j=1;j<=len2;j++)
        {

            if(s[i-1]==t[j-1])
            {
                dp[i][j]=max(dp[i-1][j-1]+1,max(dp[i][j-1],dp[i-1][j]));

            }
            else
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    }


    return dp[len1][len2];
        
    }
};