class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        int i=0;
        int curr=digits[i]+1;
        if(curr==10){
            while(curr==10){
                digits[i]=0;
                i++;
                if(i==digits.size()) digits.push_back(0);
                curr=digits[i]+1;
            }
        }
        digits[i]=curr;
        reverse(digits.begin(),digits.end());
        return digits;
    }
};