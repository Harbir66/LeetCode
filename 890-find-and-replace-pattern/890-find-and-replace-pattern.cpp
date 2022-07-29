class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string p) {
        vector<string> res;
        map<char,char> mp;
        map<char,char> mp2;
        // for(int i=0;i<p.size();i++){
        //     mp1[p[i]]++;
        // }
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            for(int j=0;j<=temp.size();j++){
                // cout<<"MAP\n";
                // for(auto k=mp.begin();k!=mp.end();k++){
                //     cout<<k->first<<" : "<<k->second<<endl;
                // }
                if(j==temp.size()){
                    res.push_back(temp);
                    break;
                }
                if(mp.find(p[j])==mp.end()){
                    mp[p[j]]=temp[j];
                }
                else{
                    if(mp[p[j]]!=temp[j]) break;
                }
                if(mp2.find(temp[j])==mp2.end()){
                    mp2[temp[j]]=p[j];
                }
                else{
                    if(mp2[temp[j]]!=p[j]) break;
                }
            }
            mp.clear();
            mp2.clear();
        }
        return res;
    }
};