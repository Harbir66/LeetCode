class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int temp[cost.size()];
        temp[0]=cost[0];
        temp[1]=cost[1];
        for(int i=2;i<cost.size();i++){
            temp[i]=cost[i];
            temp[i]+=temp[i-1]<temp[i-2]?temp[i-1]:temp[i-2];
        }
        return temp[cost.size()-1]<temp[cost.size()-2]?temp[cost.size()-1]:temp[cost.size()-2];
    }
};