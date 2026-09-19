class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> soldiers; // {soldier_count, row_index}

        int m = mat.size();
        int n = mat[0].size();

        for (int i = 0; i < m; i++) {
            int count = 0;

            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1) {
                    count++;
                }
            }

            soldiers.push_back({count, i});
        }

        sort(soldiers.begin(), soldiers.end());

        vector<int> finalans;

        for (int i = 0; i < k; i++) {
            finalans.push_back(soldiers[i].second);
        }

        return finalans;
    }
};