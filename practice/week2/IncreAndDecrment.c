#include <stdio.h>

int main()
{
	int x = 1; // 변수 초기화

	printf("x=%d\n", x++); // x = x + 1을 의미, 1 출력
	printf("x=%d\n", x++); // x 사용 후 +1로 2 출력
	printf("x=%d\n", ++x); // x + 1 후 사용으로 4 출력
	printf("x=%d\n", x--); // x = x - 1을 의미, 4 출력
	printf("x=%d\n", x--); // x 사용 후 -1로 3 출력 
	printf("x=%d\n", --x); // x - 1 후 사용으로 1 출력

}