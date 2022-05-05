class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {
    }
    
    void push(int x) {
        if(q1.empty()){
            if(q2.empty()){
                q1.push(x);
            }
            else{
                q2.push(x);
            }
        }
        else{
            q1.push(x);
        }
    }
    
    int pop() {
        int temp;
        if(!q1.empty()){
            while(q1.size()>1){
                temp=q1.front();
                q1.pop();
                q2.push(temp);
            }
            temp=q1.front();
            q1.pop();
            return temp;
        }
        else if(!q2.empty()){
            while(q2.size()>1){
                temp=q2.front();
                q2.pop();
                q1.push(temp);
            }
            temp=q2.front();
            q2.pop();
            return temp;
        }
        return temp;
    }
    
    int top() {
        int temp;
        if(!q1.empty()){
            temp=q1.back();
            return temp;
        }
        else if(!q2.empty()){
            temp=q2.back();
            return temp;
        }
        return temp;
    }
    
    bool empty() {
        return q1.empty()&&q2.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */