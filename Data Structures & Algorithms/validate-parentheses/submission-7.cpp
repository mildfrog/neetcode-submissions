class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> pair = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (auto c : s) {
            if (pair.count(c)) {
                if (!st.empty() && st.top() == pair[c]) {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                st.push(c);
            }
        }
        return st.empty();
    }
};
