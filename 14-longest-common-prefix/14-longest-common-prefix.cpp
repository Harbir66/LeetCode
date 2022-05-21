class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        int i=0;
        string pre="";
        
        bool condition=true;
        while(condition){
            cout<<"I"<<i<<endl;
            for(int j=1;j<strs.size();j++){
                // if(strs[j]=="") return "";
                if(i==strs[j-1].size() || i==strs[j].size()){
                    condition=false;
                    break;
                }
                if(strs[j-1][i]!=strs[j][i]){
                    condition=false;
                    break;
                }
            }
            i++;
        }
        return strs[0].substr(0,i-1);
        // while(true){
        //     // if(strs[0].size()==0) return 0;
        //     char temp=strs[0][i];
        //     bool diff=0;
        //     for(int j=1;j<strs.size();j++){
        //         // if(strs[j].size()==0) return 0;
        //         if(temp!=strs[j][i]){
        //             diff=1;
        //             break;
        //         }
        //     }
        //     if(diff==1){
        //         break;
        //     }
        //     pre+=temp;
        //     i++;
        // }

        return pre;
    }
};