class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target<nums[0]) return 0;
        if(target>nums[nums.size()-1]) return nums.size();
        int l=0,r=nums.size()-1,mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) l=mid+1;
            else r=mid-1;
        }
        return l;
    }
};