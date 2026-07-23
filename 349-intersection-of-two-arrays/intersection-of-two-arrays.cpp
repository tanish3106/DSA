class Solution {
public:
    bool binarySearch(vector<int>& nums2, int x) {
        int low = 0;
        int high = nums2.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums2[mid] == x)
                return true;
            else if (nums2[mid] < x)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return false;
    }

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums2.begin(), nums2.end());

        unordered_set<int> st;

        for (int x : nums1) {
            if (binarySearch(nums2, x)) {
                st.insert(x);
            }
        }

        return vector<int>(st.begin(), st.end());
    }
};