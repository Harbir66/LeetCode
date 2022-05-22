class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1;
        int j=0;
        while(s[i]==' '){
            i--;
            j++;
        }
    
        for(i;i>=0;i--){
            if(s[i]==' ') break;
        }
        return s.size()-j-i-1;
    }
};