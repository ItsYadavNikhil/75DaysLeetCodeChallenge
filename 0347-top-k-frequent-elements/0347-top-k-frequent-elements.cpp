#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }

        // Buckets where index is the frequency
        vector<vector<int>> buckets(n + 1);
        for (auto const& [val, freq] : counts) {
            buckets[freq].push_back(val);
        }

        vector<int> result;
        // Iterate backwards from the highest possible frequency
        for (int i = n; i >= 0 && result.size() < k; --i) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) return result;
            }
        }
        
        return result;
    }
};