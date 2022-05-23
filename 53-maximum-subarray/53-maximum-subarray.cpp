class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN;
        int curr_sum=0;
        for(int i=0;i<nums.size();i++){
            curr_sum+=nums[i];
            sum=max(sum,curr_sum);
            if(curr_sum<0){
                // sum=max(sum,curr_sum);
                curr_sum=0;
            } 
        }
        // sum=max(sum,curr_sum);
        return sum;
    }
};