class MyCalendar {
    vector<pair<int,int>> v;
public:
    MyCalendar() {
        v.clear();
    }
    
    bool book(int start, int end) {
        for(int i=0;i<v.size();i++){
            int s=v[i].first;
            int e=v[i].second;
            if((end>s && end<=e) || (start>=s && start<e)|| (start<=s && end>=e)) {
                return false;
            }
        }
        v.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */