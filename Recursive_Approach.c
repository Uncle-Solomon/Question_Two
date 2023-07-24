#include <stdio.h>

int F_recursive(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return F_recursive(n - 3) + F_recursive(n - 2);
}

int main() {
    int n = 10; // Example value for n
    printf("F(%d) = %d\n", n, F_recursive(n));
    return 0;
}
