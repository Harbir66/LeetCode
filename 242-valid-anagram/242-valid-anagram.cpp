class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        
        if(n!=m) return false;
        
        int mp[26]={};
        
        for(int i=0;i<n;++i){
            mp[s[i]-'a']++;
        }
        for(int i=0;i<m;++i){
            if(mp[t[i]-'a']==0) return false;
            mp[t[i]-'a']--;
        } 
        
        for(auto m:mp){
            if(m>0) return false;
        }
        return true;
    }
};