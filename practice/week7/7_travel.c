#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10]; // 2X10 �������� 2���� �迭 names ����
char cities[NUMCITY][10]; // 3X10 �������� 2���� �迭 cities ����

void calculateTravelDays(); // �Լ� calculateTravelDays�� ���� ����

int main() {

	// ����ڷκ��� ���� �̸� �Է¹ޱ�
	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���. \n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	// ����ڷκ��� ��� �̸� �Է¹ޱ�
	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays(); // �Լ� calculateTravelDays ȣ��

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE]; // 3X2 �������� 2���� �迭 travelDays ����

	// �� ���ÿ��� �� ����� ���� �� �� �Է¹ޱ�
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}

	// �� ���ú� �� �� �� �� ��� �� �� ��� �� ���
	for (int i = 0; i < NUMCITY; i++) {
		int totalDays = 0; // ���� totalDays ���� �� �ʱ�ȭ
		for (int j = 0; j < NUMPEOPLE; j++) {
			totalDays += travelDays[i][j]; // ������ �� �� �� ���ϱ�
		}
		float averageDays = (float)totalDays / NUMPEOPLE; // ��� �� ������ ��� �� �� ���ϱ�
		printf("���� %s���� ���� �� �ϼ� : %d, ��� �� �� : %.2f\n", cities[i], totalDays, averageDays);
	}
}