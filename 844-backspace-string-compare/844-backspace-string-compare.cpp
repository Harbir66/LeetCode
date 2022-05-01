class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1="";
        string t1="";
        int i=0,j=0;
        for(i=0,j=0;i<s.size()&&j<t.size();i++,j++){
            if(s[i]=='#'){
               if(s1.size()>0) s1.pop_back();
               }   
            else s1+=s[i];
            if(t[j]=='#'){
               if(t1.size()>0) t1.pop_back();
               }   
            else t1+=t[j];
        }
        while(i<s.size()){
            if(s[i]=='#'){
               if(s1.size()>0) s1.pop_back();
               }   
            else s1+=s[i];
            i++;
        }
        while(j<t.size()){
            if(t[j]=='#'){
               if(t1.size()>0) t1.pop_back();
               }   
            else t1+=t[j];
            j++;
        }
        return s1==t1;
    }
};