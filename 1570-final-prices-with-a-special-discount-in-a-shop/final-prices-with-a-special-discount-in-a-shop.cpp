class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;

for (int i = prices.size() - 1; i >= 0; i--) {
    int curr = prices[i];

    while (!st.empty() && st.top() > curr)
        st.pop();

    if (!st.empty())
        prices[i] -= st.top();

    st.push(curr);
}
return prices;

    }
};