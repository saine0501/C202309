#include <stdio.h>

long multiF(int value); // �Լ� ���� ����

int (main)()
{
	printf("1���� 2������ ���� %ld\n", multiF(2)); // multiF(2) ȣ��
	printf("1���� 3������ ���� %ld\n", multiF(3)); // multiF(3) ȣ��
	printf("1���� 5������ ���� %ld\n", multiF(5)); // multiF(5) ȣ��
}

long multiF(int value) { // �Լ� multiF ���� (Header)
	int i = 1; // ���� i ���� �� �ʱ�ȭ
	long multi = 1; // ���� multi ���� �� �ʱ�ȭ

	while (i <= value) { // �Լ� multiF ���� (Body), i <= value �� ���� ���� �ݺ�
		multi = multi * i; // multi�� i �� ���ϱ�
		i++; // i ����
	}
	return multi; // ���� multi ��ȯ
}