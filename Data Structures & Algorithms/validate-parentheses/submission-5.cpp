class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        unordered_map<char, char> mapping = {{')', '('}, {'}', '{'}, {']', '['}};

        if(s.length() < 2)
            return false;
        for(char c : s)
        {
            cout<<c<<endl;
            if( c=='(' || c== '{' || c=='[' )
                st.push(c);
            else
            { 
                if( !st.empty() && st.top() == mapping[c])
                    st.pop();
                else
                    return false;
            }
        }
        return st.empty();
    }
};
