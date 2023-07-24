#include <stdio.h>

#define MAX_N 100 // Define the maximum value of n for memoization

int memo[MAX_N + 1] = {0, 1, 2};

int F_memoization(int n) {
    if (n <= 2)
        return memo[n];

    if (memo[n] == 0)
        memo[n] = F_memoization(n - 3) + F_memoization(n - 2);

    return memo[n];
}

int main() {
    int n = 10; // Example value for n
    printf("F(%d) = %d\n", n, F_memoization(n));
    return 0;
}
