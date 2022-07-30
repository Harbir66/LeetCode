class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        // map<char,int> mp1;
        // map<char,int> mp2;
        
        int mp2[26]={0,};
        vector<string> ans;
        for(int i=0;i<words2.size();++i){
            int mp1[26]={0,};
            for(int j=0;j<words2[i].size();++j){
                ++mp1[words2[i][j]-'a'];
                mp2[words2[i][j]-'a']=max(mp2[words2[i][j]-'a'],mp1[words2[i][j]-'a']);
            }
        }
        for(int i=0;i<words1.size();++i){
            int mp1[26]={0,};
            ans.push_back(words1[i]);
            for(int j=0;j<words1[i].size();++j){
                ++mp1[words1[i][j]-'a'];
            }
            for(int j=0;j<26;++j){
                if(mp2[j]>mp1[j]) {ans.pop_back();break;}
            }
            // for(auto j=mp2.begin();j!=mp2.end();++j){
            //     if(mp1[])
            //     if(mp1.find(j->first)==mp1.end()) {ans.pop_back();break;}
            //     else if(mp1[j->first]<j->second) {ans.pop_back();break;}
            // }
        }
        return ans;
    }
};