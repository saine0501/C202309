#include <stdio.h>

int main(void) {
	int i = 0; // ���� i ����
	while (i < 10) { // i < 10 �� true�� ��� �ݺ��� ����
		i++; // i�� ũ�⸦ 1 ����
		if (i % 2 == 0) { // i�� ¦���̸� �ݺ��� ó������
			continue;
		}
		printf("%d Hello World!\n", i); // i ���� Hello World ���
	}
	return 0;
}