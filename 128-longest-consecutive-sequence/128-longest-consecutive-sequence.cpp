class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if( nums.size()==0 || nums.size()==1) return nums.size();
        sort(nums.begin(),nums.end());
        int longest=1;
        int temp=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]) temp=temp;
            else if(nums[i]-nums[i-1]==1) temp++;
            else{
                longest=max(longest,temp);
                temp=1;
            }
        }
        longest=max(longest,temp);
        return longest;
    }
};