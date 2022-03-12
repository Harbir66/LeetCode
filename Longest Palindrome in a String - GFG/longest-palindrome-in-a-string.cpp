// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
    int n=S.size();
    bool dp[n][n]={0};
    int len=0;
    int max_i=0,max_j=0;
    for(int gap=0;gap<n;gap++){
        for(int i=0;i+gap<n;i++){
            int j=i+gap;
            if(gap==0){
                dp[i][j]=true;
            }
            else if(gap==1){
                dp[i][j]=S[i]==S[j]?1:0;
            }
            else{
                dp[i][j]=(S[i]==S[j]&&dp[i+1][j-1]==1)?1:0;
            }
        if(dp[i][j]==1){
            if(len<gap+1)
            {max_i=i;
            max_j=j;
            len=gap+1;}
        }
        }
    }
    for(int i=max_i;i<=max_j;i++){
        cout<<S[i];
    }
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends