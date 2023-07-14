
vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    int len = original.size();
    if (len != m * n) {
        return {};  // Return an empty 2D array if it is impossible to construct.
    }

    vector<vector<int>> result(m, vector<int>(n));

    for (int i = 0; i < len; i++) {
        int row = i / n;        // Calculate the row index.
        int col = i % n;        // Calculate the column index.
        result[row][col] = original[i];
    }

    return result;
}

