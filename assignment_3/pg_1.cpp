/*💡 Question 1: Find three integers with the sum closest to the target:

Answer:
*/


int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int closestSum = INT_MAX;

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int currSum = nums[i] + nums[left] + nums[right];

            if (currSum == target) {
                return currSum;
            }

            closestSum = abs(closestSum - target) < abs(currSum - target) ? closestSum : currSum;

            if (currSum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    return closestSum;
}
