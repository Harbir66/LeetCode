class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<string,int> mp;
        for(int i=0;i<words.size();++i){
            mp[words[i]]++;
        }
        int res=0;
        
        for(auto i=mp.begin();i!=mp.end();i++){
            string temp=i->first;
            int k=0,j=0;
            while(j<s.size() && k<temp.size()){
                if(s[j]==temp[k]){
                    j++;
                    k++;
                }
                else{
                    j++;
                }
            }
            if(k==temp.size()){
                res+=mp[temp];
            }
        }
        
        
        return res;
    }
};