#include <stdio.h>

int main(void) {
	int one, two, three; // ���� ���� ���� ����
	printf("���� 3���� �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three); 
	// �� �Լ����� ���� ���� �Է� �� ������ ���� ����
	// ���⸦ �������� ���� �� ������ ���� ������ ����
	printf("ù ��° �� : %d\n", one); // ù ��° ���� ���
	printf("�� ��° �� : %d\n", two); // �� ��° ���� ���
	printf("�� ��° �� : %d\n", three); // �� ��° ���� ���
	return 0;
}