class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.length();
        string result;

        vector<bool> taken(26, false);
        vector<int> lastIndex(26);

        // Store the last occurrence of every character
        for (int i = 0; i < n; i++) {
            lastIndex[s[i] - 'a'] = i;
        }

        for (int i = 0; i < n; i++) {
            char ch = s[i];
            int ind = ch - 'a';

            // Skip if the character is already included
            if (taken[ind]) {
                continue;
            }

            // Remove larger characters if they occur again later
            while (!result.empty() &&
                   result.back() > ch &&
                   lastIndex[result.back() - 'a'] > i) {

                char removed = result.back();
                result.pop_back();
                taken[removed - 'a'] = false;
            }

            result.push_back(ch);
            taken[ind] = true;
        }

        return result;
    }
};