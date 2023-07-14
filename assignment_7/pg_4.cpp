answer-4:

#include <vector>
#include <unordered_map>
#include <algorithm>

int findMaxLength(const std::vector<int>& nums) {
    int n = nums.size();
    std::unordered_map<int, int> prefixSum;
    int maxLen = 0;
    int count = 0;

    prefixSum[0] = -1; // Initialize with prefix sum 0 at index -1

    for (int i = 0; i < n; i++) {
        count += (nums[i] == 1 ? 1 : -1);

        if (prefixSum.find(count) != prefixSum.end()) {
            int prevIndex = prefixSum[count];
            maxLen = std::max(maxLen, i - prevIndex);
        } else {
            prefixSum[count] = i;
        }
    }

    return maxLen;
}

