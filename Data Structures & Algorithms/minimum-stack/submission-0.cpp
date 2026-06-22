class MinStack {
public:
    MinStack() {
    }
    
     void push(int val) {
        stacks.push(val);
        // Push to minStack if it's empty or val is smaller or equal to current min
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }

    void pop() {
        if (stacks.empty()) return; // safety check

        if (stacks.top() == minStack.top()) {
            minStack.pop();
        }
        stacks.pop();
    }

    int top() {
        if (stacks.empty()) return INT_MIN; // or throw an exception
        return stacks.top();
    }

    int getMin() {
        if (minStack.empty()) return INT_MAX; // or throw an exception
        return minStack.top();
    }
    stack<int> minStack;
    stack<int> stacks;

};
