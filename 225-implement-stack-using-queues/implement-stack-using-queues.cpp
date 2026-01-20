class MyStack {
private:
    queue<int> obj;

public:


    void push(int x) {
        int n = obj.size();
        obj.push(x);

        for (int i = 0; i < n; i++) {
            obj.push(obj.front());
            obj.pop();
        }
    }

    int pop() {
        int val = obj.front();
        obj.pop();
        return val;
    }

    int top() {
        return obj.front();
    }

    bool empty() {
        return obj.empty();
    }
};
