class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<char> st;
        int i = s.size() - 1;

        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        while (i >= 0 && s[i] != ' ') {
            st.push(s[i]);
            i--;
        }

        return st.size();
    }
};