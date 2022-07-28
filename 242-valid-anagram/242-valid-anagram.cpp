class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        
        if(n!=m) return false;
        
        unordered_map<char,int> mp;
        
        for(int i=0;i<n;++i){
            mp[s[i]]++;
        }
        for(int i=0;i<m;++i){
            mp[t[i]]--;
        } 

        for(auto i=mp.begin();i!=mp.end();++i){
            if(i->second>0 || i->second<0) return false;
        }
        return true;
    }
};