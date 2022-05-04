class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        auto i=nums.begin();
        
        auto j=nums.end()-1;
        sort(nums.begin(),nums.end());
        int count=0;
        while(i<j){
            if(*i+*j==k){
                count++;
                i++;
                j--;
            }
            else if(*i+*j > k){
                j--;
            }
            else if(*i+*j < k){
                i++;
            }
        }
        return count;
    }
};