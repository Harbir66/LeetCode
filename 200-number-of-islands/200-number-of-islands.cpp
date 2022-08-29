class Solution {
public:
    vector<vector<int>> visited;
    int ans=0;
    void dfs(vector<vector<char>>& grid,int i,int j){
        // cout<<"I"<<i<<" "<<"J"<<j<<endl;
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size())
            return;
        if(grid[i][j]=='0' || visited[i][j]) return;
        visited[i][j]=1;
        dfs(grid,i,j+1);
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        visited.resize(grid.size(),vector<int>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    ans++;
                    dfs(grid,i,j);    
                }
            }
        }
        return ans;
    }
};