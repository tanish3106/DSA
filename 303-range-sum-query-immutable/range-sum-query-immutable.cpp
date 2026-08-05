class NumArray {
public:
    vector<int>ans;
    NumArray(vector<int>& nums) { 
        for(int i =0 ; i<nums.size();i++){
            ans.push_back(nums[i]);
        }
    }
    
    int sumRange(int left, int right) {
        int sum=0;
        while(left<=right){
            sum+=ans[left];
            left++;
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */