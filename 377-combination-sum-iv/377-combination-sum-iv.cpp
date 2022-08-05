class Solution {
    vector<int> dp;
public:
    int help(vector<int>& nums,int target,int sum){
        if(sum>target) return 0;
        if(sum==target) return 1;
        if(dp[sum]!=-1) {
            return dp[sum]; 
        }
        
        int ways=0;
        for(int i=0;i<nums.size();++i){
            if(sum+nums[i]<=target){
                ways+=help(nums,target,sum+nums[i]);
                // cout<<"S "<<(sum+nums[i])<<" W "<<ways<<endl;
            }
        }

        return dp[sum]=ways;
    }
    int combinationSum4(vector<int>& nums, int target) {
        dp.resize(target+1,-1);
        int sum=0;
        int count=help(nums,target,sum);
        return count;
    }
};