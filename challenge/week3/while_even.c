#include <stdio.h>

int main(void) {
	int i = 0; // 변수 i 선언
	while (i < 10) { // i < 10 이 true인 경우 반복문 실행
		i++; // i의 크기를 1 증가
		if (i % 2 == 0) { // i가 짝수이면 반복문 처음으로
			continue;
		}
		printf("%d Hello World!\n", i); // i 값과 Hello World 출력
	}
	return 0;
}