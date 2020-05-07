class Solution {
public:
    

    
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<int> >mp;
       
        
        const  int n=strs.size();
        
        
        for(int i=0;i<n;i++)
        {
            
            string ss=strs[i];
            sort(ss.begin(),ss.end());
            
            mp[ss].push_back(i);
      
        }
        
      
        
        const int len= mp.size();
        vector<vector<string> >ans(len);
        int i=0;
        for(auto it:mp)
        {
            vector<int>vect;
            vect=it.second;
            for(int x:vect)
            {
                ans[i].push_back(strs[x]);
            }
            i++;
        }
        
        return ans;
        
    }
};