#include <stdio.h>

unsigned long int u(int base) {
    if (base == 0) return 0;
    if (base == 1) return 1;

    unsigned long int a = 0, b = 1, fib = 0;
    for (int i = 2; i <= base; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return b;
}

int main() {
    int base;
    printf("Enter number: ");
    scanf("%d", &base);

    unsigned long int result = u(base);
    printf("Fibonacci(%d) = %lu\n", base, result);

    return 0;
}
