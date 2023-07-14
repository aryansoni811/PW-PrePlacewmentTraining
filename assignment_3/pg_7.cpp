/*💡 Question 7: Find the shortest sorted list of ranges covering missing numbers:

Answer:
*/
vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
    vector<string> result;
    long long start = lower;

    for (int num : nums) {
        if (num > start) {
            result.push_back(getRange(start, num - 1));
        }
        start = (long long)num + 1;
    }

    if (start <= upper) {
        result.push_back(getRange(start, upper));
    }

    return result;
}

string getRange(int start, int end) {
    return start == end ? to_string(start) : to_string(start) + "->" + to_string(end);
}
