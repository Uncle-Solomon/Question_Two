#include <stdio.h>

int F_iterative(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    int f_n_minus_3 = 0, f_n_minus_2 = 1, f_n_minus_1 = 2, f_n;

    for (int i = 3; i <= n; i++) {
        f_n = f_n_minus_3 + f_n_minus_2;
        f_n_minus_3 = f_n_minus_2;
        f_n_minus_2 = f_n_minus_1;
        f_n_minus_1 = f_n;
    }

    return f_n;
}

int main() {
    int n = 10; // Example value for n
    printf("F(%d) = %d\n", n, F_iterative(n));
    return 0;
}
