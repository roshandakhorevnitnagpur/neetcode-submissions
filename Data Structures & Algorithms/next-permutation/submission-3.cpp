class Solution {
   public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;

        // find the smaller greater no you want to swap with the smaller no
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }
        // if the array is in decreasing order , simply reverse to get the next permutation
        if (index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        // swap the greater element on the right
        for (int i = n - 1; i > index; i--) {
            if (nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }
        // reverse to the generate the smaller no on the right
        reverse(nums.begin() + index + 1, nums.end());
    }
};