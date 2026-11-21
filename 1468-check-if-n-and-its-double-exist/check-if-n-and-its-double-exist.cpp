
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            int target = 2 * arr[i];

            int low = 0, high = n - 1;

            while (low <= high) {
                int mid = low + (high - low) / 2;

                if (arr[mid] == target && mid != i) {
                    return true;
                }
                else if (arr[mid] > target) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
        }

        return false;
    }
};
