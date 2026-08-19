class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int length = INT_MAX;
        int totalSum = 0;
        int left = 0;
        for(int right = 0; right<nums.size(); right++){
            totalSum += nums[right];
            while(totalSum >= target){
                length = min(length,right-left+1);
                totalSum-=nums[left];
                left++;
            }
        }
        if(length == INT_MAX){
            return 0;
        }
        
        return length;
    }
};