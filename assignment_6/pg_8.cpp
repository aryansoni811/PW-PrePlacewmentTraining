answer-8:

#include <vector>

std::vector<std::vector<int>> multiply(const std::vector<std::vector<int>>& mat1, const std::vector<std::vector<int>>& mat2) {
    int m = mat1.size();
    int k = mat1[0].size();
    int n = mat2[0].size();

    std::vector<std::vector<int>> result(m, std::vector<int>(n, 0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int x = 0; x < k; x++) {
                result[i][j] += mat1[i][x] * mat2[x][j];
            }
        }
    }

    return result;
}
