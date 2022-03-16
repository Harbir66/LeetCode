class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
//         1st solution
//         vector<int> n(nums.size()*2,0);
        
//         for(int i=0;i<nums.size();i++){
//             n[i]=nums[i];
//             n[i+nums.size()]=nums[i];
//         }
        // 2nd solution
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }
        
        return nums;
    }
};