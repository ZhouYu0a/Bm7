#include <stdio.h>

// 河內塔遞歸函數
// n 是圓盤的數量，from 是起始釘子，to 是目標釘子，aux 是輔助釘子
void hanoi(int n, char from, char to, char aux) {
    // 基本情況：只剩一個圓盤
    if (n == 1) {
        printf("將圓盤 1 從 %c 移動到 %c\n", from, to);
        return;
    }

    // 第一步：將前 n-1 個圓盤從 from 移到 aux，使用 to 作為輔助釘子
    hanoi(n - 1, from, aux, to);

    // 第二步：將第 n 個圓盤從 from 移到 to
    printf("將圓盤 %d 從 %c 移動到 %c\n", n, from, to);

    // 第三步：將 n-1 個圓盤從 aux 移到 to，使用 from 作為輔助釘子
    hanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    printf("輸入圓盤數量：");
    scanf("%d", &n);

    printf("河內塔的步驟：\n");
    hanoi(n, 'A', 'C', 'B');  // 'A' 是起始釘子，'C' 是目標釘子，'B' 是輔助釘子

    return 0;
}
