#include <stdio.h>

long multif(int value); // �Լ� ���� ����

void(main)()
{
	printf("1���� 2������ ���� %d\n", multif(2)); // multif(2) ȣ��
	printf("1���� 3������ ���� %d\n", multif(3)); // multif(3) ȣ��
	printf("1���� 5������ ���� %d\n", multif(5)); // multif(5) ȣ��
}

long multif(int value) { // �Լ� multif ���� (Header)
	int i = 1; // ���� i ���� �� �ʱ�ȭ
	long multi = 1; // ���� multi ���� �� �ʱ�ȭ

	while (i <= value) { // �Լ� multif ���� (Body), i <= value �� ���� ���� �ݺ�
		multi = multi * i; // multi�� i �� ���ϱ�
		i++; // i ����
	}
	return multi; // ���� multi ��ȯ
}