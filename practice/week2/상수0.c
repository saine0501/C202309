# include <stdio.h>

int main(void) {
	const int YEAR = 1972; // const 한정자를 이용해 상수 YEAR 선언
	printf("C 언어가 발표된 연도: %d\n", YEAR); // YEAR 값 1972 출력
	// YEAR = 1973; 상수 변경 시도로 에러 발생
	return 0;
}