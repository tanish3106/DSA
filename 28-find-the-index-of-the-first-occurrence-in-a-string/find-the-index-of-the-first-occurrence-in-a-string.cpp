class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;

        int i = 0, j = 0;
        int index = 0;

        while (i < haystack.size()) {
            if (haystack[i] == needle[j]) {
                i++;
                j++;

                if (j == needle.size()) {
                    return index;
                }
            } else {
                index++;
                i = index;
                j = 0;

                // Not enough characters left to match
                if (index + needle.size() > haystack.size()) {
                    return -1;
                }
            }
        }

        return -1;
    }
};