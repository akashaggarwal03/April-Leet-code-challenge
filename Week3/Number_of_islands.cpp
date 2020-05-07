#define BOOST ios::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);


class Solution {
    
public:
       
    int dfs(int i,int j,vector<vector<char>>& grid )
    {
        //BOOST
            
         if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size()  || grid[i][j]=='0' )
             return 0;
            
        
        grid[i][j]='0';
       
        
       dfs(i+1,j,grid);
       dfs(i-1,j,grid);
       dfs(i,j-1,grid);
       dfs(i,j+1,grid);
        
        return 1;
        
    }
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        
        //BOOST
        int row=grid.size();
        
        if(row==0)
            return 0;
        
        int col= grid[0].size();
        
        
        
        int ans=0;
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='1')
                {
                    ans+=dfs(i,j,grid);
                    
                }
            }
        }
        return ans;
        
    }
};