class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        const int n=nums.size();
        
        int xori=nums[0];
        
        for(int i=1;i<n;i++)
            xori^=nums[i];
        return xori;
        
    }
};