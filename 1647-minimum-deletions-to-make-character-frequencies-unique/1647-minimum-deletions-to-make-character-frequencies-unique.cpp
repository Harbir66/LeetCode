class Solution {
public:
    int minDeletions(string s) {
        map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        int res=0;
        map<int,bool> m2;
        for(auto i=m.begin();i!=m.end();i++){
            // cout<<i->first<<" : "<<i->second<<"\n";
            if(m2[i->second]==0){
                m2[i->second]=1;
            }
            else{
                // cout<<i->first<<"\n";
                int num=i->second;
                while(m2[num]!=0 && num >0){
                    num--;
                }
                int temp=i->second-num;
                res+=temp;
                m2[num]=1;
            }
        }
        return res;
    }
};