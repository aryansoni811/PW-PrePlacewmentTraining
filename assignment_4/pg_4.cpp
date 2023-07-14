💡 Question 4: Maximize the sum of minimum pairs:



// Answer 4
int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int sum = 0;

    for (int i = 0; i < nums.size(); i += 2) {
        sum += nums[i];
    }

    return sum;
}

