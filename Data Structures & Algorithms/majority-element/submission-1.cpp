class Solution {
   public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }

        for (auto& elem : count) {
            if (elem.second > nums.size()/2) {
                return elem.first;
            }
        }
        return -1;
    }
};