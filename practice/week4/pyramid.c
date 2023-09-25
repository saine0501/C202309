#include <stdio.h>

int main() 
{
	int floor; // 변수 floor 선언
	printf("몇 층을 쌓겠습니까? (5~100) ");
	scanf_s("%d", &floor); // 사용자에게 쌓을 층 입력받기
	
	for (int i = 0; i < floor; i++) { // 입력받은 floor 만큼 반복, i 증가
		for (int j = 0; j < floor - 1 - i; j++) { // floor - 1 - i 만큼 반복, j 증가
			printf("S"); // 반복 횟수대로 S 출력
		}
		for (int k = 0; k < i * 2 + 1; k++) { // i * 2 + 1 만큼 반복, k 증가
			printf("*"); // 반복 횟수대로 * 출력
		}
		printf("\n"); // 층 구분을 위한 줄바꿈 문자 출력
	}
	return 0;

}