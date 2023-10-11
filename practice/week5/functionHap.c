#include <stdio.h>

int hapf(int value); // 함수 원형 선언

int (main)()
{
	printf("1부터 10까지의 합은 %d\n", hapf(10)); // hap(10) 호출
	printf("1부터 100까지의 합은 %d\n", hapf(100)); // hap(100) 호출
	printf("1부터 1000까지의 합은 %d\n", hapf(1000)); // hap(1000) 호출

	return 0;
}

int hapf(int value) { // 함수 hapf 정의 (Header)
	int i = 1; // 변수 i 선언 및 초기화
	int hap = 0; // 변수 hap 선언 및 초기화

	while (i <= value) { // 함수 hapf 정의 (Body), i <= value 가 참인 동안 반복
		hap = hap + i; // hap에 i 값 더하기
		i++; // i 증가
	}
	return hap; // 변수 hap 반환
}
