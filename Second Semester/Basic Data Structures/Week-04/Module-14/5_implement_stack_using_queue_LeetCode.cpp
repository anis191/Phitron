/*
class MyStack {
public:
    queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        queue<int>newq;
        int last;
        while(! q.empty()){
            int i = q.front();
            q.pop();
            if(q.empty()){
                last = i;
                break;
            }
            newq.push(i);
        }
        q = newq;
        return last;
    }
    
    int top() {
         queue<int>newq;
        int last;
        while(! q.empty()){
            int i = q.front();
            q.pop();
            if(q.empty()){
                last = i;
            }
            newq.push(i);
        }
        q = newq;
        return last;
    }
    
    bool empty() {
        return q.empty();
    }
};
*/
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */