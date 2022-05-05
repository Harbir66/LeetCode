class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {
        // queue<int> q1;
        // queue<int> q2;
        q1;
        q2;
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
        if(!q1.empty()){
            int temp;
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
            int temp;
            while(q2.size()>1){
                temp=q2.front();
                q2.pop();
                q1.push(temp);
            }
            temp=q2.front();
            q2.pop();
            return temp;
        }
        return 0;
    }
    
    int top() {
        if(!q1.empty()){
            int temp=q1.back();
            // while(q1.size()>1){
            //     temp=q1.top();
            //     q1.pop();
            //     q2.push(temp);
            // }
            // temp=q1.top();
            // q2.push(temp);
            // q1.pop();
            return temp;
        }
        else if(!q2.empty()){
            int temp=q2.back();
            // while(q2.size()>1){
            //     temp=q2.top();
            //     q2.pop();
            //     q1.push(temp);
            // }
            // temp=q2.top();
            // q1.push(temp);
            // q2.pop();
            return temp;
        }
        return 0;
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