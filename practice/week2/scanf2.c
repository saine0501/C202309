#include <stdio.h>

int main(void) {
	int one, two, three; // 여러 개의 변수 선언
	printf("정수 3개를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three); 
	// 한 함수에서 여러 개의 입력 값 변수로 저장 가능
	// 띄어쓰기를 기준으로 나뉜 세 정수를 각각 변수에 저장
	printf("첫 번째 값 : %d\n", one); // 첫 번째 변수 출력
	printf("두 번째 값 : %d\n", two); // 두 번째 변수 출력
	printf("세 번째 값 : %d\n", three); // 세 번째 변수 출력
	return 0;
}