#include <stdio.h>

int main()
{
	char name[128]; // ũ�Ⱑ 128�� �迭 name
	printf("�̸�? ");
	scanf_s("%s", name, sizeof(name)); // sizeof()�Լ��� ���� ���ڿ��� ũ�� ��ȯ

	int age; // ������ ���� ����
	printf("����? ");
	scanf_s("%d", &age); // �Է¹��� ������ ���� age ���

	double weight; // �Ǽ� double�� ���� ����
	printf("������? ");
	scanf_s("%lf", &weight); // �Է¹��� �Ǽ��� ���� weight ���

	float height; // �Ǽ� float�� ���� ����
	printf("Ű? ");
	scanf_s("%f", &height); // �Է¹��� �Ǽ��� ���� height ���

	char what[512]; // ũ�Ⱑ 512�� �迭 what
	printf("����? ");
	scanf_s("%s", what, sizeof(what));

	printf("\n-----������ ����-----\n"); // \n�� �Է��� ���� �ٲ� ���
	printf("�̸� : %s\n", name);
	printf("���� : %d\n", age);
	printf("������ : %lf\n", weight);
	printf("Ű : %f\n", height);
	printf("�˸� : %s\n", what);

	return 0;

}