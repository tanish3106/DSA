class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int>ans;
        for(int i = 1; i<num;i++){
            if(num%i==0){
                ans.push_back(i);
            }
        }
        int final_sum=0;
        for(int i = 0 ; i < ans.size();i++){
            final_sum+=ans[i];
        }
        if(final_sum==num){
            return true;
        }
        return false;
    }
};