#include <stdio.h>

int main() 
{
	int floor; // ���� floor ����
	printf("�� ���� �װڽ��ϱ�? (5~100) ");
	scanf_s("%d", &floor); // ����ڿ��� ���� �� �Է¹ޱ�
	
	for (int i = 0; i < floor; i++) { // �Է¹��� floor ��ŭ �ݺ�, i ����
		for (int j = 0; j < floor - 1 - i; j++) { // floor - 1 - i ��ŭ �ݺ�, j ����
			printf("S"); // �ݺ� Ƚ����� S ���
		}
		for (int k = 0; k < i * 2 + 1; k++) { // i * 2 + 1 ��ŭ �ݺ�, k ����
			printf("*"); // �ݺ� Ƚ����� * ���
		}
		printf("\n"); // �� ������ ���� �ٹٲ� ���� ���
	}
	return 0;

}