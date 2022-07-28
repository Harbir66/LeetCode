class Solution {
public:
    bool isAnagram(string s, string t) {
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
        
//         return s==t;
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        unordered_map<char,int> mp;
        for(int i=0;i<n;++i){
            mp[s[i]]++;
            // cout<<s[i]<<" : "<<mp[s[i]]<<endl;
        }
        for(int i=0;i<m;++i){
            mp[t[i]]--;
            if(mp[t[i]]<0) return false;
            // cout<<t[i]<<" : "<<mp[t[i]]<<endl;
        } 
        // cout<<mp.size();
        for(auto i=mp.begin();i!=mp.end();++i){
            if(i->second>0) return false;
        }
        return true;
    }
};