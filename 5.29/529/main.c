#include <stdio.h>

// 璸衡程そ计 (GCD) 徊ㄧΑ
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 璸衡程そ计 (LCM) ㄧΑ
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    // ㄏノ块ㄢ俱计
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int result = lcm(num1, num2);
    printf("Least Common Multiple of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
