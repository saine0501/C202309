#include <stdio.h>

int main() {
	int num; // num 변수 선언
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num); // 사용자로부터 num 변수 값 입력받기

	// 사용자가 0을 입력하면 "zero" 출력
	if (num == 0) {
		printf("zero");
	}

	// 사용자가 1를 입력하면 "one" 출력
	else if (num == 1) {
		printf("one");
	}

	// 사용자가 2을 입력하면 "two" 출력
	else if (num == 2) {
		printf("two");
	}

	// 0 ~ 2 범위가 아닌 다른 값을 입력하면 "not 0 ~ 2" 출력
	else {
		printf("not 0 ~ 2");
	}
	return 0;
}
