class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int longest = 0;
        int count = 1;
        int secondSmallest = INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i] -1 == secondSmallest){
                count++;
                secondSmallest = nums[i];
            }
            else if(nums[i] != secondSmallest){
                count = 1;
                secondSmallest = nums[i];
            }
            longest = max(longest,count);
        }
        return longest;
    }
};
