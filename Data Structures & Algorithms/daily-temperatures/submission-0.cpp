class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n,0);
        stack<int> stacks;
        for(int i =0; i < n ; i++)
        {
            if(stacks.empty())
                stacks.push(i);
            while(!stacks.empty() && temperatures[stacks.top()] < temperatures[i])
            {
                int res = i - stacks.top();
                result[stacks.top()] = res;
                stacks.pop();
            }
            stacks.push(i);
        }
        return result;
        
    }
};
