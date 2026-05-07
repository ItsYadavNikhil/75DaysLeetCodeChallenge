class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool op = false;
        std::sort(nums.begin(), nums.end());
        for(int i = 0, j = 1; j<nums.size(); i++,j++) {
            if(nums[i]==nums[j]) op = true;
        }
        return op;
    }
};