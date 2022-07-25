class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        vector<int> res(2,-1);
        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m]==target){
                res[0]=m;
                res[1]=m;
                while(res[0]-1 >=0 && nums[res[0]-1]==target){
                    res[0]--;
                }
                while(res[1]+1<nums.size() && nums[res[1]+1]==target){
                    res[1]++;
                }
                break;
            }
            else if(nums[m]<target){
                l=m+1;
            }
            else if(nums[m]>target){
                r=m-1;
            }
        }
        return res;
    }
};