💡 Question 2: Find distinct integers not present in the other array:



// Answer 2
vector<vector<int>> findDisappearedNumbers(vector<int>& nums1, vector<int>& nums2) {
    vector<int> notInNums2;
    vector<int> notInNums1;

    unordered_set<int> numSet(nums2.begin(), nums2.end());

    for (int num : nums1) {
        if (numSet.find(num) == numSet.end()) {
            notInNums2.push_back(num);
        }
    }

    numSet.clear();

    for (int num : nums2) {
        numSet.insert(num);
    }

    for (int num : nums1) {
        if (numSet.find(num) == numSet.end()) {
            notInNums1.push_back(num);
        }
    }

    return {notInNums1, notInNums2};
}
