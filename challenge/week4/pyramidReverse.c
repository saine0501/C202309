#include <stdio.h>

int main()
{
	int floor; // ���� floor ����
	printf("�� ���� �װڽ��ϱ�? (5~100) ");
	scanf_s("%d", &floor); // floor �� ����� �Է¹ޱ�

	for (int i = floor; i > 0; i--) { // i�� 0���� Ŭ �� �ݺ�, i ����
		for (int j = 0; j < floor - i; j++) { // floor - i ���� j�� ���� �� �ݺ�, j ����
			printf("S"); // �ݺ� Ƚ����� S ���
		}
		for (int k = 0; k < i * 2 - 1; k++) { // i * 2 - 1 ���� k�� ���� �� �ݺ�, k ����
			printf("*"); // �ݺ� Ƚ����� * ���
		}

		printf("\n"); // �� ������ ���� �ٹٲ� ���� ���
	}
	return 0;
}