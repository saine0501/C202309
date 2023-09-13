# include <stdio.h>
# define PI 3.1415926 // 상수 PI 정의

int main(void) {
	const int YEAR = 1972;
	printf("C 언어가 발표된 연도: %d \n", YEAR);
	// YEAR = 1973;

	printf("원의 넓이 구하는 공식: %.2f x 반지름^2", PI);
	// 실수값이므로 서식 지정자 %.nf 사용, 소수점 아래 3번째 자리에서 반올림하여 3.14 출력
		
	return 0;
}