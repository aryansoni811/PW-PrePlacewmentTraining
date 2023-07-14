answer-6:

#include <vector>
#include <unordered_map>

std::vector<int> findOriginalArray(std::vector<int>& changed) {
    std::unordered_map<int, int> countMap;

    for (int num : changed) {
        countMap[num]++;
    }

    std::vector<int> original;

    for (int num : changed) {
        if (num == 0) {
            if (countMap[num] % 2 != 0) {
                return {}; // Empty array
            }
        } else {
            if (countMap[num] > 0 && countMap[2 * num] > 0) {
                original.push_back(num);
                countMap[num]--;
                countMap[2 * num]--;
            } else {
                return {}; // Empty array
            }
        }
    }

    return original;
}

