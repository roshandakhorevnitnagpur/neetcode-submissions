class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> count;
        for (auto num : nums) {
            if (count.count(num)) {
                return true;
            }
            count.insert(num);
        }
        return false;
    }
};