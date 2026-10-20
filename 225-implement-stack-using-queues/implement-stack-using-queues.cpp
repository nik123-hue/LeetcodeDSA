class MyStack {
public:
queue<int> q;
    MyStack() {}
    void push(int x) {
        q.push(x);
        int n = q.size();
        for(int i=0;i<n-1;i++){
            q.push(q.front());
            q.pop();
        }
    }
    int pop() {
        int x = q.front();
      q.pop(); 
      return x;
    }
    
    int top() {
      return q.front();
    }
    
    bool empty() {
        if(q.size()==0) return true;
        else return false;
    }
};