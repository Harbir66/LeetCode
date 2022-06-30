class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()/2;
        int result=0;
        for(int i=0;i<nums.size();i++){
            int temp=nums[i]-nums[n];
            result+=temp>0?temp:(temp*-1);
        }
        return result;
    }
};