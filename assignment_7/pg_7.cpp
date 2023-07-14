answer-7:

#include <vector>

std::vector<std::vector<int>> generateMatrix(int n) {
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));

    int num = 1;
    int rowStart = 0, rowEnd = n - 1;
    int colStart = 0, colEnd = n - 1;

    while (num <= n * n) {
        for (int j = colStart; j <= colEnd; j++) {
            matrix[rowStart][j] = num++;
        }
        rowStart++;

        for (int i = rowStart; i <= rowEnd; i++) {
            matrix[i][colEnd] = num++;
        }
        colEnd--;

        for (int j = colEnd; j >= colStart; j--) {
            matrix[rowEnd][j] = num++;
        }
        rowEnd--;

        for (int i = rowEnd; i >= rowStart; i--) {
            matrix[i][colStart] = num++;
        }
        colStart++;
    }

    return matrix;
}



