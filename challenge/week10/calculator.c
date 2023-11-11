#include <stdio.h>

// 함수가 main 함수보다 밑에 정의되어 있어 함수의 원형 선언
void summation(double* a, double* b, double* result);
void subtraction(double* a, double* b, double* result);
void multification(double* a, double* b, double* result);
void division(double* a, double* b, double* result);

int main() {
	double a = 2, b = 3;
	double result;

	// 입력받은 변수를 더하는 함수 호출
	summation(&a, &b, &result);
	printf("%.0lf + %.0lf = %.2lf \n", a, b, result);

	// 입력받은 변수를 빼는 함수 호출
	subtraction(&a, &b, &result);
	printf("%.0lf - %.0lf = %.2lf \n", a, b, result);

	// 입력받은 변수를 곱하는 함수 호출
	multification(&a, &b, &result);
	printf("%.0lf * %.0lf = %.2lf \n", a, b, result);

	// 입력받은 변수를 나누는 함수 호출
	division(&a, &b, &result);
	printf("%.0lf / %.0lf = %.2lf \n", a, b, result);
}

// 포인터로 double형 변수를 입력받고 두 변수를 더하는 작업 수행
void summation(double* a, double* b, double* result) {
	*result = *a + *b;
}

// 포인터로 double형 변수를 입력받고 두 변수를 빼는 작업 수행
void subtraction(double* a, double* b, double* result) {
	*result = *a - *b;
}

// 포인터로 double형 변수를 입력받고 두 변수를 곱하는 작업 수행
void multification(double* a, double* b, double* result) {
	*result = *a * *b;
}

// 포인터로 double형 변수를 입력받고 두 변수를 나누는 작업 수행
void division(double* a, double* b, double* result) {
	*result = *a / *b;
}