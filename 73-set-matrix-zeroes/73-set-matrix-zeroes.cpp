class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        int ind=(n*m)-1;
        vector<int> rows(n,0);
        vector<int> cols(m,0);
        for(int i=0;i<=ind;++i){
            int row=i/m;
            int col=i%m;
            if(matrix[row][col]==0){
                rows[row]=1;
                cols[col]=1;
            }
        }
        for(int i=0;i<=ind;++i){
            int row=i/m;
            int col=i%m;
            if(rows[row]||cols[col]) matrix[row][col]=0;
        }
    }
};