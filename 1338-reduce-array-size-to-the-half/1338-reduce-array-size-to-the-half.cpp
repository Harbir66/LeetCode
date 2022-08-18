class Solution {
public:
    static bool cmp(pair<int,int> a,pair<int,int> b){
        return a.second<b.second;
    }
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        map<int,int> mp;
        vector<pair<int,int>> v;
        for(int i=0;i<n;++i){
            mp[arr[i]]++;
        }
        int half=n/2;
        for(auto i=mp.begin();i!=mp.end();++i){
            v.push_back({i->first,i->second});
        }
        sort(v.begin(),v.end(),cmp);
        auto i=v.rbegin();
        int res=0;
        while(half>0){
            res++;
            half-=i->second;
            i++;
        }
        return res;
    }
};