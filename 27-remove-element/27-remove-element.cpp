class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0){
            return nums.size();
        }
        int l=0;
        int i=0;
        while(nums[i]==val){
            i++;
            if(i>=nums.size()){
                return 0;
            }
        }
        for(i;i<nums.size();i++){
            if(nums[i]!=val){
                nums[l]=nums[i];
                l++;
            }
        }
        return l;
    }
};