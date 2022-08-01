class Solution {
    vector<vector<int>> dp;
public:
    int help(int i,int j,int m,int n){
        if(i>=m || j>=n) return 0;
        if(dp[i][j]) return dp[i][j];
        
        int paths=0+help(i+1,j,m,n)+help(i,j+1,m,n);
        dp[i][j]=paths;
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        dp.resize(m,vector<int>(n,0));
        dp[m-1][n-1]=1;
        return help(0,0,m,n);
    }
};