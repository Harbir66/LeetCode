class Solution {
public:
    int helper(vector<int>& arr,int target){
        int ans=0;
        int sum=0;
        map<int,int> mp;
        
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==target){
                ans++;
            }
            if(mp.find(sum-target)!=mp.end()){
                ans+=mp[sum-target];
            }
            mp[sum]++;
        }
        
        return ans;
    }
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int ans=0;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            vector<int> temp(m,0);
            for(int j=i;j<n;j++){
                for(int k=0;k<m;k++){
                    temp[k]+=matrix[j][k];
                }
                ans+=helper(temp,target);
            }
        }
        return ans;
    }
};