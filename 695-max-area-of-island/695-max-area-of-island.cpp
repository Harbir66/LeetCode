class Solution {
public: 
    int calc(vector<vector<int>>& grid,int i,int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()) return 0;
        if(grid[i][j]==0) return 0;
    
        grid[i][j]=0;
        
        return 1 + calc(grid,i-1,j)+calc(grid,i+1,j)+calc(grid,i,j-1)+calc(grid,i,j+1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area=0;
        int temp=0;

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]){
                    temp=calc(grid,i,j);
                    area=max(area,temp);
                }   
            }
        }
        return area;
    }
};