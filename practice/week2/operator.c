#include <stdio.h>

int main()
{
	int x = +4; // ���� x �ʱ�ȭ, x���� +4
	int y = -2; // ���� y �ʱ�ȭ, y���� -2

	printf("x + (-y) = %d\n", x + (-y)); // x + (-y) ��� �� �İ� �Բ� ���
	printf("-x + (+y) = %d\n", -x + (+y)); // -x + (+y) ��� �� �İ� �Բ� ���
}