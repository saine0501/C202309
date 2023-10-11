#include <stdio.h>

long multiF(int value); // 함수 원형 선언

int (main)()
{
	printf("1부터 2까지의 곱은 %ld\n", multiF(2)); // multiF(2) 호출
	printf("1부터 3까지의 곱은 %ld\n", multiF(3)); // multiF(3) 호출
	printf("1부터 5까지의 곱은 %ld\n", multiF(5)); // multiF(5) 호출

	return 0;
}

long multiF(int value) { // 함수 multiF 정의 (Header)
	int i = 1; // 변수 i 선언 및 초기화
	long multi = 1; // 변수 multi 선언 및 초기화

	while (i <= value) { // 함수 multiF 정의 (Body), i <= value 가 참인 동안 반복
		multi = multi * i; // multi에 i 값 곱하기
		i++; // i 증가
	}
	return multi; // 변수 multi 반환
}
