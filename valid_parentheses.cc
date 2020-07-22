class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[')
                st.push(c);
            else {
                if (st.size() == 0)
                    return false;
                char buf = st.top();
                if (c == ')') {
                    if (buf != '(')
                        return false;
                    else
                        st.pop();
                } else if (c == ']') {
                    if (buf != '[')
                        return false;
                    else
                        st.pop();
                } else if (c == '}') {
                    if (buf != '{')
                        return false;
                    else
                        st.pop();
                }
            }
        }
        if (st.size() == 0)
            return true;
        return false; 
    }
};
