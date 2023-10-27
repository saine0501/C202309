#include <stdio.h>
#define MAX_TASKS 10 // 할 일 개수의 최댓값 설정
#define CHAR_NUM 100
#include <string.h>

char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // 할 일들을 저장하기 위한 2차원 배열 선언
int taskCount = 0; // 할 일의 개수를 저장하는 변수 taskCount 선언 후 초기화

void addTask(char task[]); // addTask 함수의 원형 선언
void delTask(int delIndex, int taskCount); // delTask 함수의 원형 선언
void printTask(int taskCount); // printTask 함수의 원형 선언

int main() {
	printf("TODO 리스트 시작! \n");

	while (1) {
		int choice = -1; // 사용자 입력 값을 저장하기 위한 변수 choice 선언 후 초기화

		printf("------------------\n");
		printf("메뉴를 입력해주세요.\n");
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5. 할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice); // 사용자에게 입력 받은 값을 choice 변수로 저장

		int terminate = 0; // 프로그램 종료를 위한 정수형 변수 terminate 선언 및 초기화
		int delIndex = -1;  // 할 일 삭제를 위한 정수형 변수 delIndex 선언 및 초기화
		int changeIndex = -1; // 할 일 수정을 위한 정수형 변수 changeIndex 선언 및 초기화
		char ch; // 할 일 수정시 버퍼를 받기 위한 문자형 변수 ch

		switch (choice) {
		case 1: // 사용자가 1을 입력할 경우, 할 일 추가
			addTask(tasks[taskCount]); // 할 일 추가의 기능을 수행하는 addTask 함수 호출
			taskCount++; // 할 일의 개수 저장하는 변수의 값 증가
			break;

		case 2: // 사용자가 2를 입력할 경우, 할 일 삭제
			printf("삭제할 할 일의 번호를 입력해주세요. (1부터 시작): ");

			// 삭제할 할 일의 번호를 사용자에게 입력받아 delIndex 변수에 저장
			scanf_s("%d", &delIndex);

			// 사용자가 저장된 할 일의 개수보다 큰 번호나 0 이하의 번호를 입력할 경우
			if (delIndex > taskCount || delIndex <= 0) {
				printf("삭제 범위가 벗어났습니다.\n");
			}
			else {
				delTask(delIndex, taskCount); // 할 일 삭제의 기능을 수행하는 delTask 함수 호출
				taskCount -= 1; // 할 일의 개수 저장하는 변수의 값 감소
			}
			break;

		case 3: // 사용자가 3을 입력할 경우, 목록 보기
			printf("할 일 목록\n");
			printTask(taskCount); // 할 일 목록의 출력을 수행하는 printTask 함수 호출
			break;

		case 4: // 사용자가 4를 입력할 경우, 프로그램 종료
			terminate = 1; // 프로그램 종료를 위한 변수 값 변경
			break;

		case 5: // 사용자가 5를 입력할 경우, 할 일 수정
			printf("수정할 할 일의 번호를 입력해주세요. (1부터 시작):");

			// 수정할 할 일의 번호를 사용자에게 입력받아 changeIndex 변수에 저장
			scanf_s("%d", &changeIndex);

			// 사용자가 저장된 할 일의 개수보다 큰 번호나 0 이하의 번호를 입력할 경우
			if (changeIndex > taskCount || changeIndex <= 0) {
				printf("삭제 범위가 벗어났습니다.\n");
			}
			else {
				printf("%d. %s : 할 일을 수정합니다.\n", changeIndex, tasks[changeIndex - 1]);
				
				// 입력받은 번호의 할 일에 해당하는 인덱스의 내용 삭제
				strcpy_s(tasks[changeIndex - 1], sizeof(tasks[changeIndex - 1]), "");
				printf("새로운 할 일을 입력하세요 (공백 없이 입력하세요): ");
				
				// 새롭게 입력받은 할 일을 tasks[changeIndex - 1]에 저장
				scanf_s("%s", tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex - 1]));
				printf("할 일 ""%d. %s""로 수정되었습니다\n\n", changeIndex, tasks[changeIndex - 1]);
			}
			break;
		
		default: // 사용자가 1~5가 아닌 다른 값을 입력할 경우
			printf("잘못된 선택입니다. 다시 선택하세요.\n");
		}

		if (terminate == 1) { // terminate 값이 1이 되면 프로그램 종료
			printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n");
			break;
		}

		// 할 일의 개수가 최대값이 되면 프로그램 종료
		if (taskCount == 10) {
			printf("할 일이 %d개로 다 찼습니다.", taskCount);
			break;
		}
	}
	return 0;
}

void addTask(char task[]) {
	printf("할 일을 입력하세요 (공백 없이 입력하세요): ");

	// 할 일을 입력받고 배열 tasks에 저장
	scanf_s("%s", task, (int)sizeof(task));
	strcpy_s(tasks[taskCount], sizeof(tasks[taskCount]), task);
	printf("할 일 ""%s""가 저장되었습니다\n\n", task);
}

void delTask(int delIndex, int taskCount) {

	printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);

	// 삭제할 인덱스의 뒤에 있는 인덱스의 할 일 가져오기
	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
	}
}

void printTask(int taskCount) {
	for (int i = 0; i < taskCount; i++) { // 저장된 할 일의 개수인 taskCount 만큼 반복
		printf("%d. %s \n", i + 1, tasks[i]); // 저장된 할 일의 번호와 내용 출력
	}
	printf("\n");
}