class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        map<int,int> mp;
        vector<int> v;
        for(int i=0;i<n;++i){
            mp[arr[i]]++;
        }
        int half=n/2;
        for(auto i=mp.begin();i!=mp.end();++i){
            v.push_back(i->second);
        }
        sort(v.begin(),v.end());
        auto i=v.rbegin();
        int res=0;
        while(half>0){
            res++;
            half-=*i;
            i++;
        }
        return res;
    }
};