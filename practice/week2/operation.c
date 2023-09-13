#include <stdio.h>

int main() 
{
	int x = 4; // 변수 x 초기화
	int y = 2; // 변수 y 초기화
	int z; // 변수 선언

	z = x + y; // x + y 값을 z 변수에 저장
	printf("z = x + y = %d\n", z); // z 변수 값 6 출력
	z = x - y; // x - y 값을 z 변수에 저장
	printf("z = x - y = %d\n", z); // z 변수 값 2 출력
	z = x * y; // x * y 값을 z 변수에 저장
	printf("z = x * y = %d\n", z); // z 변수 값 8 출력
	z = x / y; // x / y 값을 z 변수에 저장
	printf("z = x / y = %d\n", z); // z 변수 값 2 출력
}