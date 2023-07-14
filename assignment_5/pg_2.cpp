answer-2:

int arrangeCoins(int n) {
    long long left = 0;
    long long right = n;
    long long k;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long total = (mid * (mid + 1)) / 2;

        if (total == n) {
            return mid;  // Found a complete row.
        } else if (total > n) {
            right = mid - 1;  // Adjust the range to the left half.
        } else {
            left = mid + 1;  // Adjust the range to the right half.
        }
    }

    return right;  // Return the number of complete rows.
}
