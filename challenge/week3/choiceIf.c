#include <stdio.h>

int main() {
	int choice; // choice 변수 선언

	printf("1. 파일 저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n");
	scanf_s("%d", &choice); // 사용자로부터 choice 변수의 값 입력받기

	// 사용자가 1을 입력하면 "파일을 저장합니다." 출력
	if (choice == 1) { 
		printf("파일을 저장합니다.\n");
	}

	// 사용자가 2를 입력하면 "저장 없이 닫습니다." 출력
	else if (choice == 2) { 
		printf("저장 없이 닫습니다.\n");
	}

	// 사용자가 3을 입력하면 "종료합니다." 출력
	else if (choice == 3) { 
		printf("종료합니다.\n");
	}

	// 사용자가 지정된 값이 아닌 다른 값을 입력하면 "잘못 입력하셨습니다." 출력
	else {
		printf("잘못 입력하셨습니다.\n");
	}
	return 0;
}
