class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int longest = 0;
        int count = 0;
        int lastSmallest = INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i] - 1 == lastSmallest){
                count++;
                lastSmallest = nums[i];
            }
            else if(nums[i] != lastSmallest){
                count = 1;
                lastSmallest = nums[i];
            }

            longest = max(count,longest);
        }

        return longest;
    }
};
