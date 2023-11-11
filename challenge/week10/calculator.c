#include <stdio.h>

// �Լ��� main �Լ����� �ؿ� ���ǵǾ� �־� �Լ��� ���� ����
void summation(double* a, double* b, double* result);
void subtraction(double* a, double* b, double* result);
void multification(double* a, double* b, double* result);
void division(double* a, double* b, double* result);

int main() {
	double a = 2, b = 3;
	double result;

	// �Է¹��� ������ ���ϴ� �Լ� ȣ��
	summation(&a, &b, &result);
	printf("%.0lf + %.0lf = %.2lf \n", a, b, result);

	// �Է¹��� ������ ���� �Լ� ȣ��
	subtraction(&a, &b, &result);
	printf("%.0lf - %.0lf = %.2lf \n", a, b, result);

	// �Է¹��� ������ ���ϴ� �Լ� ȣ��
	multification(&a, &b, &result);
	printf("%.0lf * %.0lf = %.2lf \n", a, b, result);

	// �Է¹��� ������ ������ �Լ� ȣ��
	division(&a, &b, &result);
	printf("%.0lf / %.0lf = %.2lf \n", a, b, result);
}

// �����ͷ� double�� ������ �Է¹ް� �� ������ ���ϴ� �۾� ����
void summation(double* a, double* b, double* result) {
	*result = *a + *b;
}

// �����ͷ� double�� ������ �Է¹ް� �� ������ ���� �۾� ����
void subtraction(double* a, double* b, double* result) {
	*result = *a - *b;
}

// �����ͷ� double�� ������ �Է¹ް� �� ������ ���ϴ� �۾� ����
void multification(double* a, double* b, double* result) {
	*result = *a * *b;
}

// �����ͷ� double�� ������ �Է¹ް� �� ������ ������ �۾� ����
void division(double* a, double* b, double* result) {
	*result = *a / *b;
}