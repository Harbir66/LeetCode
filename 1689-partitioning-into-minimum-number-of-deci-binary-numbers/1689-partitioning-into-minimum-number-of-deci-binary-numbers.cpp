class Solution {
public:
    int minPartitions(string n) {
        int req=0;
        for(int i=0;i<n.size();i++){
            req=max(req,n[i]-'0');
        }
        return req;
    }
};