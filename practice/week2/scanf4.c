#include <stdio.h>

int main(void) {
	char str[256]; // 256���� ���ڸ� ������ �� �ִ� ���ڿ� str ����
	scanf_s("%s", str, sizeof(str)); // ���ڿ� str�� �Է¹ް�, ���ڿ��� ũ�⸦ ��ȯ
	printf("%s\n", str); // ���ڿ� ���
	return 0;
}