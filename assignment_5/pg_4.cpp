answer-4:

#include <vector>
#include <unordered_set>

using namespace std;

vector<vector<int>> findDisjointArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<vector<int>> answer(2);
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> set2(nums2.begin(), nums2.end());

    for (int num : nums1) {
        if (set2.count(num) == 0) {
            answer[0].push_back(num);
        }
    }

    for (int num : nums2) {
        if (set1.count(num) == 0) {
            answer[1].push_back(num);
        }
    }

    return answer;
}

