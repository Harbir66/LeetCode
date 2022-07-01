class Solution {
public:
    static bool cmp(vector<int> &i,vector<int> &j){
        return (i[1]>=j[1]);
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        for(int i=0;i<boxTypes.size();i++){
            cout<<boxTypes[i][0]<<" ";
        }
        int res=0;
        int i=0;
        for(i=0;i<boxTypes.size();i++){
            
            if(truckSize-boxTypes[i][0]<0) break;
            res+=boxTypes[i][1]*boxTypes[i][0];
            truckSize-=boxTypes[i][0];
        }
        if(i<boxTypes.size())
        res+=boxTypes[i][1]*truckSize;
        return res;
    }
};