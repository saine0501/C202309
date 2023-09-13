#include <stdio.h>

#define X 1 // 상수는 전체 대문자로 약속, 상수 X 선언
#define PI 3.141592  // 상수 PI 선언

int main() {
	double z; // 변수 선언

	z = X + PI; // 변수 초기화, 변수 z에 X + PI의 값 저장

	printf("%f", z); // 변수 z 출력
}