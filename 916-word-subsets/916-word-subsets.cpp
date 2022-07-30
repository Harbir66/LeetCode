class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        map<char,int> mp1;
        map<char,int> mp2;
        vector<string> ans;
        for(int i=0;i<words2.size();++i){
            for(int j=0;j<words2[i].size();++j){
                ++mp1[words2[i][j]];
                mp2[words2[i][j]]=max(mp2[words2[i][j]],mp1[words2[i][j]]);
            }
            
            mp1.clear();
        }
        for(int i=0;i<words1.size();++i){
            ans.push_back(words1[i]);
            for(int j=0;j<words1[i].size();++j){
                ++mp1[words1[i][j]];
            }
            for(auto j=mp2.begin();j!=mp2.end();++j){
                if(mp1.find(j->first)==mp1.end()) {ans.pop_back();break;}
                else if(mp1[j->first]<j->second) {ans.pop_back();break;}
            }
            mp1.clear();
        }
        return ans;
    }
};