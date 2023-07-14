💡 Question 7: Count maximum integers in a matrix after operations:



// Answer 7
int maxCount(int m, int n, vector<vector<int>>& ops) {
    int minRow = m;
    int minCol = n;

    for (auto op : ops) {
        minRow = min(minRow, op[0]);
        minCol = min(minCol, op[1]);
    }

    return minRow * minCol;
}
