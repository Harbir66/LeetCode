class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end());
        vector<vector<int>> temp(people.size(),vector<int>(2,-1));
        for(int i=0;i<people.size();i++){
            int a=people[i][0];
            int b=people[i][1];
            // cout<<'['<<a<<","<<b<<"]\n";
            // while(temp[b][0]!=-1){
            //     b++;
            // }
            int count=b;
            int pos=0;
            int j;
            for(j=0;j<people.size();j++){
                
                if(count<=0) break;
                // cout<<j<<" ";
                if(temp[j][0]==-1 || temp[j][0]>=a) {
                    count--;
                    pos=j+1;
                }
                
            }
            // cout<<"H\n";
            while(temp[pos][0]!=-1){
                pos++;
            }
            // cout<<"P:"<<pos<<"\n";
            temp[pos]=people[i];
        }
        
        return temp;
    }
};