#include <stdio.h>

// �e�����k���
// n �O��L���ƶq�Afrom �O�_�l�v�l�Ato �O�ؼаv�l�Aaux �O���U�v�l
void hanoi(int n, char from, char to, char aux) {
    // �򥻱��p�G�u�Ѥ@�Ӷ�L
    if (n == 1) {
        printf("�N��L 1 �q %c ���ʨ� %c\n", from, to);
        return;
    }

    // �Ĥ@�B�G�N�e n-1 �Ӷ�L�q from ���� aux�A�ϥ� to �@�����U�v�l
    hanoi(n - 1, from, aux, to);

    // �ĤG�B�G�N�� n �Ӷ�L�q from ���� to
    printf("�N��L %d �q %c ���ʨ� %c\n", n, from, to);

    // �ĤT�B�G�N n-1 �Ӷ�L�q aux ���� to�A�ϥ� from �@�����U�v�l
    hanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    printf("��J��L�ƶq�G");
    scanf("%d", &n);

    printf("�e���𪺨B�J�G\n");
    hanoi(n, 'A', 'C', 'B');  // 'A' �O�_�l�v�l�A'C' �O�ؼаv�l�A'B' �O���U�v�l

    return 0;
}
