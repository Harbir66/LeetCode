class Solution {
public:
    int scoreOfParentheses(string s) {
        // bool open=1;
        int res=0;
        int open=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                open ++;
            }
            else{
                open--;
                if(s[i-1]=='(') {
                    res+=pow(2,open);
                    cout<<pow(2,open)<<" ";
                }
            }
        }
        return res;
    }
};