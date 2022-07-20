class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        map<string,int> mp;
        int res=0;
        for(int i=0;i<words.size();++i){
            if(mp.find(words[i])!=mp.end()){
                res+=mp[words[i]];
                // break;
            }
            else{
                string t=words[i];
                for(int j=s.size()-1;j>=0;--j){
                    if(s[j]==t.back()){
                        t.pop_back();
                    }
                    if(t.size()==0){
                        mp[words[i]]=1;
                        res++;
                        break;
                    }
                }
                if(mp[words[i]]==0)
                    mp[words[i]]=0;    
            }
            
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            cout<<i->first<<" : "<<i->second<<"\n";
        }
        return res;
    }
};