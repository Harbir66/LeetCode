class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int a=grid[0].size();
        int b=grid.size();
        k=k%(a*b);
        // cout<<k<<endl;
        while(k/a>0){
            for(int i=0;i<grid.size()-1;i++){
                swap(grid[0],grid[i+1]);
            }
            k-=a;
        }
        while(k--){
            int temp=grid[grid.size()-1][grid[0].size()-1];
            for(int i=grid.size()-1;i>=0;i--){
                for(int j=grid[0].size()-1;j>=0;j--){
                    if(i==0&&j==0){
                        grid[i][j]=temp;
                    }
                    else if(j==0 && i!=0){
                        grid[i][j]=grid[i-1][grid[0].size()-1];
                    }
                    else{
                        grid[i][j]=grid[i][j-1];
                    }
                }
            }
        }
        // [[1,2,3],[4,5,6],[7,8,9]]
        // 25
        return grid;
    }
};