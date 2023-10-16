#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10]; // 2X10 �������� 2���� �迭 names ����
char cities[NUMCITY][10]; // 3X10 �������� 2���� �迭 cities ����

void calculateTravelDays(); // �Լ� calculateTravelDays�� ���� ����
int getSum(int numArray[], int num); // �Լ� getSum�� ���� ����
double getAverage(int numArray[], int num); // �Լ� getAverage�� ���� ����
void getFamousCity(double dayArray[], int num); // �Լ� getFamousCity�� ���� ����

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

	calculateTravelDays(names); // �Լ� calculateTravelDays ȣ��

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
	double averageDays[NUMCITY];
	// �� ���ú� �� �� �� �� ��� �� �� ��� �� ���
	for (int i = 0; i < NUMCITY; i++) {
		int totalDay = getSum(travelDays[i], NUMPEOPLE);
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);
		printf("���� %s���� ���� �� �ϼ� : %d, ��� �� �� : %.2f\n", cities[i], totalDay, averageDay);
		averageDays[i] = averageDay;
	}
	getFamousCity(averageDays, NUMCITY);
}

int getSum(int numArray[], int num) {
	int totalDays = 0;
	for (int i = 0; i < num; i++) {
		totalDays += numArray[i];
	}
	return totalDays;
}

double getAverage(int numArray[], int num) {
	int totalDays = 0;
	for (int i = 0; i < num; i++) {
		totalDays += numArray[i];
	}
	double averageDays = (double)totalDays / num;
	return averageDays;
}

void getFamousCity(double dayArray[], int num) {
	double maxDay = 0;
	int maxDayIndex = 0;

	for (int i = 0; i < num; i++) {
		if (dayArray[i] > maxDay) {
			maxDay = dayArray[i];
			maxDayIndex = i;
		}
	}
	printf("����� �������� ���� �α��־��� ���ô� %s �Դϴ�. (��ոӹ���: %.2f)\n", cities[maxDayIndex], maxDay);
}
