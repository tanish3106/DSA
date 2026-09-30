class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        
        for(int i = 0 ; i<grid.size();i++){
            int j=grid[0].size()-1;
            while( j>=0 && grid[i][j]<0 ){
                count++;
                j--;
            }
        }
        return count;
    }
};