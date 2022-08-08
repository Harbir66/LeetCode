class Solution {    
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp;
        for(int i=0;i<n;++i){
            auto it=lower_bound(dp.begin(),dp.end(),nums[i]);
            if(it!=dp.end()){
                *it=nums[i];
            }
            else{
                dp.push_back(nums[i]);
            }
        }
        return dp.size();
    }
};