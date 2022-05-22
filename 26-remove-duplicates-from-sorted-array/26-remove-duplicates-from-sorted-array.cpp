class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique=1;
        int num=nums[0];
        int pos=-1;
        cout<<nums[0]<<" ";
        for(int i=1;i<nums.size();i++){
            if(nums[i]==num){
                cout<<"same ";
                nums[i]=-101;
                if(pos==-1) pos=i;
            }
            else if(nums[i]!=-101){
                num=nums[i];
                cout<<num<<" ";
                unique++;
                if(pos!=-1){
                    nums[i]=-101;
                    nums[pos]=num;
                    while(nums[pos]!=-101 && pos < nums.size()){
                        pos++;
                    }
                }
                
            }
        }
        cout<<endl;
        
        return unique;
    }
};