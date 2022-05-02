class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int even=0;
        // int odd=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                swap(nums[i],nums[even]);
                even++;
            }
        }
        return nums;
    }
};