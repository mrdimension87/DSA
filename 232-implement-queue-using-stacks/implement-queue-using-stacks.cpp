class MyQueue {
private:
    stack<int> s1; // input
    stack<int> s2; // output

    // Moves all elements from s1 to s2 if s2 is empty
    void moveToOutput() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
    }

public:
    MyQueue() {
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        moveToOutput();
        int topVal = s2.top();
        s2.pop();
        return topVal;
    }
    
    int peek() {
        moveToOutput();
        return s2.top();
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};


