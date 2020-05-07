class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
        
        int n= nums.size();
        
    
        sort(nums.begin(),nums.end());
        
        while(nums.size()>1)
        {
            auto it=nums.end();
            it--;
            int x=*it;
           // cout<<x<<"\n";
            it--;
            int y= *it;
           // cout<<y<<"\n";
            nums.erase(it,nums.end());
            nums.push_back(x-y);
            sort(nums.begin(),nums.end());
           //cout<<nums.size()<<"\n";
        }

        return nums[0];
        
    }
};