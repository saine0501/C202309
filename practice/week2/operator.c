#include <stdio.h>

int main()
{
	int x = +4; // 변수 x 초기화, x값은 +4
	int y = -2; // 변수 y 초기화, y값은 -2

	printf("x + (-y) = %d\n", x + (-y)); // x + (-y) 계산 후 식과 함께 출력
	printf("-x + (+y) = %d\n", -x + (+y)); // -x + (+y) 계산 후 식과 함께 출력
}