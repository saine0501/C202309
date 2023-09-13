#include <stdio.h>

int main()
{
	int x = 4; // 변수 x 초기화
	int y = 2; // 변수 y 초기화
	int z; // 변수 z 선언

	z = (x + y) * (x - y); // (x + y) * (x - y) 값을 z 변수에 저장
	printf("z = (x + y) * (x - y) = %d\n", z); // 계산식과 함께 z값 12 출력
	z = (x * y) + (x / y); // (x * y) + (x / y) 값을 z 변수에 저장
	printf("z = (x * y) * (x / y) = %d\n", z); // 계산식과 함께 z값 10 출력
	z = x + y + 2004; // x + y + 2004 값을 z 변수에 저장
	printf("z = x + y + 2004 = %d\n", z); // 계산식과 함께 z값 2010 출력
}