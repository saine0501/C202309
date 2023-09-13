# include <stdio.h>

int main(void) {
	float pi1 = 3.1415926f; // 실수형 변수 pi1 선언 및 초기화, f는 약속
	printf("%.5f\n", pi1); // 소수점 아래 6번째 자리에서 반올림하여 3.14159 출력

	double pi2 = 3.141; // 실수형 변수 pi2 선언 및 초기화, f는 작성하지 않아도 기능상 문제 없음
	printf("%.3lf", pi2); // 소수점 아래 4번째 자리에서 반올림하여 3.141 출력

	return 0;
}