
class Solution {
public:
    int findMaxLength(vector<int>& vect) {
        
        const int n=vect.size();
        
        if(n==0)
            return 0;
        
        for(int &x:vect)
            if(x==0)
                x=-1;
        
        unordered_map<int,int>mp;
        vector<int>pref_sum(n);
        pref_sum[0]=vect[0];
        mp[pref_sum[0]]=0;
        
      
        
        int ans=0;
        
        for(int i=1;i<n;i++)
        {
            pref_sum[i]+=pref_sum[i-1]+vect[i];
            
            if(pref_sum[i]==0)
            {
                ans=i+1;
            }
            else if(mp.find(pref_sum[i])!=mp.end())
            {
                ans=max(i-mp[pref_sum[i]],ans);
            }
            else
                mp[pref_sum[i]]=i;
            
        }
        return ans;
        
        
    }
};