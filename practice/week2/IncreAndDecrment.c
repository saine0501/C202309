#include <stdio.h>

int main()
{
	int x = 1; // ���� �ʱ�ȭ

	printf("x=%d\n", x++); // x = x + 1�� �ǹ�, 1 ���
	printf("x=%d\n", x++); // x ��� �� +1�� 2 ���
	printf("x=%d\n", ++x); // x + 1 �� ������� 4 ���
	printf("x=%d\n", x--); // x = x - 1�� �ǹ�, 4 ���
	printf("x=%d\n", x--); // x ��� �� -1�� 3 ��� 
	printf("x=%d\n", --x); // x - 1 �� ������� 1 ���

}