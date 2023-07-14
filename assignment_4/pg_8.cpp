💡 Question 8: Rearrange array in the specified form:



// Answer 8
vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> result(2 * n);

    for (int i = 0; i < n; i++) {
        result[2 * i] = nums[i];
        result[2 * i + 1] = nums[i + n];
    }

    return result;
}
