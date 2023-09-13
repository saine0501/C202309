#include <stdio.h>

int main()
{
	char name[128]; // 크기가 128인 배열 name
	printf("이름? ");
	scanf_s("%s", name, sizeof(name)); // sizeof()함수로 받은 문자열의 크기 반환

	int age; // 정수형 변수 선언
	printf("나이? ");
	scanf_s("%d", &age); // 입력받은 정수형 변수 age 출력

	double weight; // 실수 double형 변수 선언
	printf("몸무게? ");
	scanf_s("%lf", &weight); // 입력받은 실수형 변수 weight 출력

	float height; // 실수 float형 변수 선언
	printf("키? ");
	scanf_s("%f", &height); // 입력받은 실수형 변수 height 출력

	char what[512]; // 크기가 512인 배열 what
	printf("범죄? ");
	scanf_s("%s", what, sizeof(what));

	printf("\n-----범죄자 정보-----\n"); // \n을 입력해 줄을 바꿔 출력
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("몸무게 : %lf\n", weight);
	printf("키 : %f\n", height);
	printf("죄목 : %s\n", what);

	return 0;

}