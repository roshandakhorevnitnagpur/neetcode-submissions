class NumArray {
public:
    vector<int>prefix_;
    NumArray(vector<int>& nums) {
        int total = 0;
        for(int i=0; i<nums.size(); i++){
            total +=nums[i];
            prefix_.push_back(total);
        }
    }
    
    int sumRange(int left, int right) {
        int rightSum = prefix_[right];
        int leftSum = (left > 0) ? prefix_[left-1]:0;
        return rightSum-leftSum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */