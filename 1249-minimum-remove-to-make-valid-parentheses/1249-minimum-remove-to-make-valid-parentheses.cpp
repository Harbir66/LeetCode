class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            if(s[i]==')' ){
                if(st.empty()){
                    s[i]='#';
                }
                else{
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            s[st.top()]='#';
            st.pop();
        }
        
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='#'){
                res+=s[i];
            }
        }
        return res;
    }
};