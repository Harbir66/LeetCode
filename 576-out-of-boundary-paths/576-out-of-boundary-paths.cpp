class Solution {
public:
    int dp[55][55][55];
    long long mod=1e9+7;
    int helper(int m,int n,int i,int j,int r){
        if(i<0 || j<0 || i>=m || j>=n) return 1;

        if(r<=0) return 0;
        
        if(dp[i][j][r]!=-1) return dp[i][j][r];
        if(i<0 || j<0 || i>=m || j>=n) return 0;
        
        int up=helper(m,n,i-1,j,r-1);
        int down=helper(m,n,i+1,j,r-1);
        int left=helper(m,n,i,j-1,r-1);
        int right=helper(m,n,i,j+1,r-1);
        
        dp[i][j][r]=(up%mod + down%mod + left%mod + right%mod)%mod;
        return dp[i][j][r];
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp,-1,sizeof(dp));        
        return helper(m,n,startRow,startColumn,maxMove);
    }
};