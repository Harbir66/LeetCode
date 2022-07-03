class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int result=1;
        int count=1;
        int pos=-1;
        if(nums[0]<nums[1]) {pos=1;count++;}
        else if(nums[0]>nums[1]) {pos=0;count++;}
        cout<<pos<<"\n";
        for(int i=1;i<nums.size();i++){
            if(pos==-1){
                if(nums[i-1]<nums[i]) {pos=1;count++;}
                else if(nums[i-1]>nums[i]) {pos=0;count++;} 
            }
            else if(pos==1){
                if(nums[i-1]>nums[i]){
                    count++;
                    pos=0;
                }
            }
            else{
                if(nums[i-1]<nums[i]){
                    count++;
                    pos=1;
                }
            }
            cout<<pos<<"\n";
        }
        result=max(result,count);
        
        return result;
    }
};