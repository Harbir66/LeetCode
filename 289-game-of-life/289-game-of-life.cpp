class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int size1=board.size();
        int size2=board[0].size();
        vector<vector<int>> res(board.size(),vector<int> (board[0].size(),0));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(j>0){
                    res[i][j]+=board[i][j-1];
                }
                if(j+1<size2){
                    res[i][j]+=board[i][j+1];
                }
                if(i>0){
                    res[i][j]+=board[i-1][j];
                    if(j>0){
                       res[i][j]+=board[i-1][j-1];
                    }
                    if(j+1<size2){
                        res[i][j]+=board[i-1][j+1];
                    }
                }
                if(i+1<size1){
                    res[i][j]+=board[i+1][j];
                    if(j>0){
                        res[i][j]+=board[i+1][j-1];
                    }
                    if(j+1<size2){
                        res[i][j]+=board[i+1][j+1];
                    }
                }
                
                // cout<<res[i][j]<<" ";
                
            }
            // cout<<endl;
        }
        for(int i=0;i<size1;i++){
            for(int j=0;j<size2;j++){
                if(board[i][j]){
                    if(res[i][j]<2){
                        board[i][j]=0;
                    }
                    else if(res[i][j]>3){
                        board[i][j]=0;
                    }
                }
                else{
                    if(res[i][j]==3){
                        board[i][j]=1;
                    }
                }
            }
        }
    }
};