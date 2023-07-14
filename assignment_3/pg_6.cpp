/*💡 Question 6: Find the single number in an array where every other element appears twice:

Answer:
*/
int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num;
    }
    return result;
}
