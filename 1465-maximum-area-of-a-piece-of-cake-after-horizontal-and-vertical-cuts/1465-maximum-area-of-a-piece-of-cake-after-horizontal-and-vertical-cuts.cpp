class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        int a=horizontalCuts[0];
        int b=verticalCuts[0];
        
        for(int i=1;i<horizontalCuts.size();i++){
            a=max(a,horizontalCuts[i]-horizontalCuts[i-1]);
        }
        for(int i=1;i<verticalCuts.size();i++){
            b=max(b,verticalCuts[i]-verticalCuts[i-1]);
        }
        a=max(a,h-horizontalCuts[horizontalCuts.size()-1]);
        b=max(b,w-verticalCuts[verticalCuts.size()-1]);

        return (1LL*a*b)%int(1e9+7);
    }
};