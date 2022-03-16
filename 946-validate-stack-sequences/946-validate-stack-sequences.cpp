class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int j=0;
        for(int i=0;i<pushed.size();i++){
            
            s.push(pushed[i]);
            // cout<<"Pushed :"<<s.top()<<endl;
            while(!s.empty() && s.top()==popped[j]){
                // cout<<"POPED :"<<s.top()<<endl;
                s.pop();
                j++;
            }
        }
        // cout<<j<<endl;
        // cout<<popped.size();
        return j==(popped.size());
    }
};