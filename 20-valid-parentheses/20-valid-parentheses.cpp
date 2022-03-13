class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        map<char,char> m;
        m['(']=')';
        m['{']='}';
        m['[']=']';
        for(int i=0;i<s.size();i++){
            if(st.empty()||s[i]=='{'||s[i]=='['||s[i]=='('){
                st.push(s[i]);
            }
            else{
                if(s[i]!=m[st.top()]){
                    return false;
                }
                else{
                    st.pop();
                }
            }
        }
        
        return st.empty()?true:false;
    }
};