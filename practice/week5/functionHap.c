#include <stdio.h>

int hapf(int value); // �Լ� ���� ����

void(main)()
{
	printf("1���� 10������ ���� %d\n", hapf(10)); // hap(10) ȣ��
	printf("1���� 100������ ���� %d\n", hapf(100)); // hap(100) ȣ��
	printf("1���� 1000������ ���� %d\n", hapf(1000)); // hap(1000) ȣ��
}

int hapf(int value) { // �Լ� hapf ���� (Header)
	int i = 1; // ���� i ���� �� �ʱ�ȭ
	int hap = 0; // ���� hap ���� �� �ʱ�ȭ

	while (i <= value) { // �Լ� hapf ���� (Body), i <= value �� ���� ���� �ݺ�
		hap = hap + i; // hap�� i �� ���ϱ�
		i++; // i ����
	}
	return hap; // ���� hap ��ȯ
}