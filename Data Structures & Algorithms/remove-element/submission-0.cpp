class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>ans;
        for(int num : nums){
            if(num!=val){
                ans.push_back(num);
            }
        }
        for(int i=0; i<ans.size(); i++){
            nums[i] = ans[i];
        }
        return ans.size();
    }
};