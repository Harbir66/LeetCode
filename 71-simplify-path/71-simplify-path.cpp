class Solution {
public:
    string simplifyPath(string path) {
        string output="";
        vector<string> q;
        string temp="";
        for(int i=0;i<path.size();i++){
            // cout<<path[i]<<" ";
            if(path[i]!='/'){
                temp+=path[i];
            }
            else if(temp!=""){
                // cout<<"T :"<<temp<<endl;
                if(temp=="."){
                    temp="";
                    continue;
                             }
                if(temp==".."){
                    // cout<<"POP"<<endl;
                    if(!q.empty()) {
                        // cout<<"QE"<<endl;
                        q.pop_back();
                           
                    }
                    temp=""; 
                }
                else
                {q.push_back(temp);
                // cout<<temp<<endl;
                temp=""; }
            }
        }
        if(temp!=""&&temp!="."){
            if(temp==".."){
                // cout<<"POP"<<endl;
                if(!q.empty()) {
                    // cout<<"QE"<<endl;
                    q.pop_back();
                    temp="";    
                }
            }
            else
                q.push_back(temp);
        }
        for(int i=0;i<q.size();i++){
            output+='/';
            // string temp=q[i];
            if(q[i]!=".")
                output+=q[i];
        }
        return output.empty()?"/":output;
    }
};