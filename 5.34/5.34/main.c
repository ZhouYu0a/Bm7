#include <stdio.h>

int power(int base, int exponent) {
    // 終止條件：當 exponent 為 1 時，回傳 base
    if (exponent == 1) {
        return base;
    }
    // 遞迴步驟：base * power(base, exponent - 1)
    else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base, exponent;

    // 使用者輸入底數和指數
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int result = power(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}
