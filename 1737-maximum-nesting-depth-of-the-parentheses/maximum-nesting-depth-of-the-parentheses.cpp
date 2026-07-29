class Solution {
public:
    int maxDepth(string s) {
        int depth=0;
        int ans=0;
        stack<char>st;
        for(int i = 0 ; i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
                depth++;
        
            }
            else if(s[i]==')'&&!st.empty()){
                st.pop();
                depth--;
            }
            ans=max(ans,depth);
        }
        return ans;
    }
};