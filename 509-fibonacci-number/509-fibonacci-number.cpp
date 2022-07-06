class Solution {
public:
    // int num=31;
    vector<int> temp=vector<int>(31,-1);
    int fib(int n) {
        if(temp[n]!=-1) return temp[n];
        else{
            if(n==0) {
                temp[n]=0;
                return 0;
            }
            if(n==1){
                temp[n]=1;
                return 1;
            }
            temp[n]=fib(n-1)+fib(n-2);
            return temp[n];
            
        }
    }
};