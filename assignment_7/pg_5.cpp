answer-5:

#include <vector>
#include <algorithm>

int minProductSum(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::sort(nums1.begin(), nums1.end());
    std::sort(nums2.begin(), nums2.end(), std::greater<int>());

    int n = nums1.size();
    int minProductSum = 0;

    for (int i = 0; i < n; i++) {
        minProductSum += nums1[i] * nums2[i];
    }

    return minProductSum;
}

