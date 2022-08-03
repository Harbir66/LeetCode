class MyCalendar {
     priority_queue<pair<int,int>> pq;
public:
    MyCalendar() {
        // pq;
    }
    
    bool book(int start, int end) {
        priority_queue<pair<int,int>> temp=pq;
        while(!temp.empty()){
            int s=temp.top().first;
            int e=temp.top().second;
            if((end>s && end<=e) || (start>=s && start<e)|| (start<=s && end>=e)) {
                return false;
            }
            
            temp.pop();
        }
        pq.push({start,end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */