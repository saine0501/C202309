#include <stdio.h>

int main() {
	int num; // num ���� ����
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num); // ����ڷκ��� num ���� �� �Է¹ޱ�

	// ����ڰ� 0�� �Է��ϸ� "zero" ���
	if (num == 0) {
		printf("zero");
	}

	// ����ڰ� 2�� �Է��ϸ� "one" ���
	else if (num == 1) {
		printf("one");
	}

	// ����ڰ� 1�� �Է��ϸ� "two" ���
	else if (num == 2) {
		printf("two");
	}

	// 0 ~ 2 ������ �ƴ� �ٸ� ���� �Է��ϸ� "not 0 ~ 2" ���
	else {
		printf("not 0 ~ 2");
	}
	return 0;
}