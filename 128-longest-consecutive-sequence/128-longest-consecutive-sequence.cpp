class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1) return nums.size();
        map<int,bool> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=1;
        }
        int temp=1;
        int longest=1;
        
        auto i=m.begin();
        i++;
        for(i;i!=m.end();i++){
            auto j=i;
            j--;
            if(i->first - j->first == 1) temp++;
            else{
                longest=max(longest,temp);
                temp=1;
            }
        }
        longest=max(longest,temp);
        // for(auto i=m.begin();i!=m.end();i++){
        //     cout<<i->first<<" : "<<i->second<<"\n";
        // }
        
        return longest;
    }
};