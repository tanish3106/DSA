class Solution {
public:
    vector<int> constructRectangle(int area) {
        int l=area;
        int w=1;
        while(l>=w){
            if(area%l==0){
                w=area/l;
            }
            l--;
        }
        vector<int>ans;
        l++;
        ans.push_back(w);
        ans.push_back(l);
        return ans;
        
    }
};