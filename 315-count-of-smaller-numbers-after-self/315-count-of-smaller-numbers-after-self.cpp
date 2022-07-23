class Solution {
public:
    void merge(int l,int m, int r, vector<pair<int,int>>& arr, vector<int>& counts){
        vector<pair<int,int>> temp(r-l+1);
        
        int i=l;
        int j=m+1;
        int k=0;
        
        while(i<=m && j<=r){
            if(arr[i].first<=arr[j].first){
                temp[k++]=arr[j++];
            }
            else{
                counts[arr[i].second]+=(r-j+1);
                temp[k++]=arr[i++];
            }
        }
        
        while(i<=m){
            temp[k++]=arr[i++];
        }
        
        while(j<=r){
            temp[k++]=arr[j++];
        }
        
        for(int left = l; left <= r; left++)
            arr[left] = temp[left - l];
    }
    void mergeSort(int l,int r,vector<pair<int,int>>& arr, vector<int>& counts){
        if(l>=r) return;
        int m=l+(r-l)/2;
        mergeSort(l,m,arr,counts);
        mergeSort(m+1,r,arr,counts);
        
        merge(l,m,r,arr,counts);
    }
    
    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>> arr;
        vector<int> counts(n,0);
        
        for(int i=0;i<n;i++){
            arr.push_back({nums[i],i});
        }
        
        mergeSort(0,n-1,arr,counts);
        
        return counts;
    }
};