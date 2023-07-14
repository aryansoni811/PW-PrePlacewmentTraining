answer-7:

int findMin(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // If the mid element is greater than the rightmost element,
        // the minimum element must be in the right half.
        if (nums[mid] > nums[right]) {
            left = mid + 1;
        }
        // If the mid element is less than the rightmost element,
        // the minimum element must be in the left half or is the mid element itself.
        else if (nums[mid] < nums[right]) {
            right = mid;
        }
    }

    // At the end of the binary search, left will be pointing to the minimum element.
    return nums[left];
}

