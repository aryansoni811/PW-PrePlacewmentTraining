answer-8:

#include <unordered_map>
#include <vector>

using namespace std;

vector<int> findOriginalArray(vector<int>& changed) {
    vector<int> original;
    unordered_map<int, int> freq;

    // Count the frequency of each element in changed
    for (int num : changed) {
        freq[num]++;
    }

    // Iterate through each element in changed
    for (int num : changed) {
        // Check if the current element has been doubled
        if (freq[num] == 0) {
            continue;
        }

        // Check if the doubled value is present in the frequency map
        int doubled = num * 2;
        if (freq[doubled] == 0) {
            return {};  // Not a doubled array, return an empty array
        }

        // Add the original number to the result
        original.push_back(num);

        // Decrement the frequency of the original number and its doubled value
        freq[num]--;
        freq[doubled]--;
    }

    // Check if all elements have been accounted for
    for (const auto& entry : freq) {
        if (entry.second > 0) {
            return {};  // Not a doubled array, return an empty array
        }
    }

    return original;
}
