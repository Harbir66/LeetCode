class NumArray {
    vector<int> num;
    int sum=0;
public:
    NumArray(vector<int>& nums) {
        num=nums;
        sum=accumulate(nums.begin(),nums.end(),0);
    }
    
    void update(int index, int val) {
        sum-=num[index];
        num[index]=val;
        sum+=val;
    }
    
    int sumRange(int left, int right) {
        int ans=sum;
        auto b=num.begin();
        ans-=accumulate(b,b+left,0);
        ans-=accumulate(b+right+1,num.end(),0);
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */