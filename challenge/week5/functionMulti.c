#include <stdio.h>

long multif(int value); // 함수 원형 선언

void(main)()
{
	printf("1부터 2까지의 곱은 %d\n", multif(2)); // multif(2) 호출
	printf("1부터 3까지의 곱은 %d\n", multif(3)); // multif(3) 호출
	printf("1부터 5까지의 곱은 %d\n", multif(5)); // multif(5) 호출
}

long multif(int value) { // 함수 multif 정의 (Header)
	int i = 1; // 변수 i 선언 및 초기화
	long multi = 1; // 변수 multi 선언 및 초기화

	while (i <= value) { // 함수 multif 정의 (Body), i <= value 가 참인 동안 반복
		multi = multi * i; // multi에 i 값 곱하기
		i++; // i 증가
	}
	return multi; // 변수 multi 반환
}