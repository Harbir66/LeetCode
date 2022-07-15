class Solution {
public:
    int n,m;
    int calc(vector<vector<int>>& grid,int i,int j){
        if(i<0 || i>=n || j<0 || j>=m) return 0;
        if(grid[i][j]==0) return 0;
    
        grid[i][j]=0;
        
        return 1 + calc(grid,i-1,j)+calc(grid,i+1,j)+calc(grid,i,j-1)+calc(grid,i,j+1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area=0;
        int temp=0;
        n=grid.size();
        m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]){
                    temp=calc(grid,i,j);
                    area=max(area,temp);
                }   
            }
        }
        return area;
    }
};