#include <stdio.h>
#define STUDENTS 5 // 컴파일 시점에 결정되는 상수 STUDENTS 5

void classifyStudents(int scores[], char targetGrade) { // 함수 classifyStudents 정의
	printf("학생 성적 분류:\n");
	char grade = ' '; // 문자형 변수 grade 선언 및 초기화
	for (int i = 0; i < STUDENTS; i++) { // i가 상수 STUDENTS의 값인 5보다 작을 때 반복
		if (scores[i] >= 90) {
			grade = 'A'; // scores[i]의 값이 90 이상이면 A
		}
		else if (scores[i] >= 80) {
			grade = 'B'; // scores[i]의 값이 80 이상이면 B
		}
		else if (scores[i] >= 70) {
			grade = 'C'; // scores[i]의 값이 70 이상이면 C
		}
		else if (scores[i] >= 60) {
			grade = 'D'; // scores[i]의 값이 60 이상이면 D
		}
		else {
			grade = 'F'; // 그 외의 경우는 F
		}

		if (targetGrade == grade) { // 입력받은 targetGrade의 값이 학생의 성적과 같은 경우
			printf("%d 학생은 %c 점수를 받았습니다.\n", i + 1, targetGrade);
		}
	}
}

int sumScores(int scores[]){ // 함수 sumScores 정의
	int sum = 0; // int형 변수 sum 선언 및 초기화
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i]; // 변수 sum에 입력받은 배열 scores[i]의 값 저장
	}
	return sum; // sum 값 반환
}

double averageScores(int scores[]) { // 함수 averageScores 정의
	int sum = 0; // int형 변수 sum 선언 및 초기화
	double average; // double형 변수 average 선언
	
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i]; // 변수 sum에 입력받은 배열 scores[i]의 값 저장
	}

	average = sum / STUDENTS; // sum의 값을 상수 STUDENTS의 값으로 나눈 값을 average 변수에 저장
	
	return average; // average 값 변환
}

void printRanks(int scores[]) {
	int ranks[STUDENTS]; // 순위를 저장할 int 배열 ranks 선언

	for (int i = 0; i < STUDENTS; i++) { // i가 상수 STUDENTS의 값인 5보다 작을 때 반복
		ranks[i] = 1; // 모든 학생의 순위를 1으로 초기화
	}

	for (int i = 0; i < STUDENTS; i++) {
		for (int j = 0; j < STUDENTS; j++) {
			if (scores[j] > scores[i]) {
				ranks[i]++; // j번 학생이 i번 학생보다 높은 순위를 가지고 있을 때 순위 증가
			}
		}
	}

	for (int i = 0; i < STUDENTS; i++) { 
		printf("%d 학생의 순위는 %d 입니다.\n", i + 1, ranks[i]); // 학생의 번호와 순위 출력
	}
}

int main() {
	int scores[STUDENTS]; // int를 값으로 받는 배열 선언

	for (int i = 0; i < STUDENTS; i++) { // i가 상수 STUDENTS의 값인 5보다 작을 때 반복
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]); // 학생의 성적(int)을 배열로 입력받기
	}

	char ch = getchar(); // 버퍼 임시 저장 변수

	char target; // 문자형 변수 char 선언
	printf("특정 점수 (A,B,C,D,F)를 입력하시오");
	scanf_s("%c", &target, 1); // 찾고자 하는 성적 값 입력받기

	classifyStudents(scores, target); // classifyStudents 함수 호출

	int sum = sumScores(scores); // int 변수 sum에 함수 sumScores(scores)의 값 저장
	double average = averageScores(scores); // double 변수 average에 함수 averageScores(scores)의 값 저장
	printf("학생들의 점수의 총 합은 %d 이고, 평균 값은 %lf 입니다.\n", sum, average);

	printRanks(scores); // printRanks 함수 호출

	return 0;
}
