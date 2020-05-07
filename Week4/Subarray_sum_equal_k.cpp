class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        const int n=nums.size();
        unordered_map<long,int>mp;
        
        long long curr_sum=0;
        int i=0;
        int ans=0;
        while(i<n)
        {
            curr_sum+=nums[i];
            
            if(curr_sum==k)
                ans++;
            
            if(mp.find(curr_sum-k)!=mp.end())
            {
                ans+=mp[curr_sum-k];
            }
            
            mp[curr_sum]++;
            i++;
        }
        return ans;
        
    }
};