#include <stdio.h>

int main() 
{
	int x = 4; // ���� x �ʱ�ȭ
	int y = 2; // ���� y �ʱ�ȭ
	int z; // ���� ����

	z = x + y; // x + y ���� z ������ ����
	printf("z = x + y = %d\n", z); // z ���� �� 6 ���
	z = x - y; // x - y ���� z ������ ����
	printf("z = x - y = %d\n", z); // z ���� �� 2 ���
	z = x * y; // x * y ���� z ������ ����
	printf("z = x * y = %d\n", z); // z ���� �� 8 ���
	z = x / y; // x / y ���� z ������ ����
	printf("z = x / y = %d\n", z); // z ���� �� 2 ���
}