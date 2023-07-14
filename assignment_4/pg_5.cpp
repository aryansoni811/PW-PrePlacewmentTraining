💡 Question 5: Count complete rows in a staircase:



// Answer 5
int arrangeCoins(int n) {
    int rows = 0;
    int coins = 1;

    while (n >= coins) {
        n -= coins;
        coins++;
        rows++;
    }

    return rows;
}
