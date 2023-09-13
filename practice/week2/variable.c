#include <stdio.h>

int main()
{
	// 정수형 변수 x, y, z 선언
	int x;
	int y;
	int z;

	// 변수 x, y 초기값 설정
	x = 1;
	y = 2;
	
	// 변수 z에 x + y 값 저장
	z = x + y;

	printf("%d", z); // x + y의 값 z 출력

	return 0;
}