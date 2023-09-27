#include <stdio.h>

int main()
{
	int floor; // 변수 floor 선언
	printf("몇 층을 쌓겠습니까? (5~100) ");
	scanf_s("%d", &floor); // floor 값 사용자 입력받기

	for (int i = floor; i > 0; i--) { // i가 0보다 클 때 반복, i 감소
		for (int j = 0; j < floor - i; j++) { // floor - i 보다 j가 작을 때 반복, j 증가
			printf("S"); // 반복 횟수대로 S 출력
		}
		for (int k = 0; k < i * 2 - 1; k++) { // i * 2 - 1 보다 k가 작을 때 반복, k 증가
			printf("*"); // 반복 횟수대로 * 출력
		}

		printf("\n"); // 층 구분을 위한 줄바꿈 문자 출력
	}
	return 0;
}