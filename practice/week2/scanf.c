#include <stdio.h>

int main(void){
	int input; // input 변수 선언
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input); // 사용자로부터 입력받은 값을 input 변수에 저장
	printf("입력값 : %d\n", input); // 입력값 input 출력
	return 0;
	}