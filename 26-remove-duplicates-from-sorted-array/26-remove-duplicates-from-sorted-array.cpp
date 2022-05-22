class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique=1;
        int l=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i]){
                nums[l]=nums[i];
                unique++;
                l++;
            }
        }
        
        return unique;
    }
};