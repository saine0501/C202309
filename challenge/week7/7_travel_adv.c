#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10]; // 2X10 사이즈의 2차원 배열 names 선언
char cities[NUMCITY][10]; // 3X10 사이즈의 2차원 배열 cities 선언

void calculateTravelDays(); // 함수 calculateTravelDays의 원형 선언
int getSum(int numArray[], int num); // 함수 getSum의 원형 선언
double getAverage(int numArray[], int num); // 함수 getAverage의 원형 선언
void getFamousCity(double dayArray[], int num); // 함수 getFamousCity의 원형 선언

int main() {

	// 사용자로부터 도시 이름 입력받기
	printf("%d개의 도시명을 차례대로 입력해주세요. \n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	// 사용자로부터 사람 이름 입력받기
	printf("%d개의 여행자 이름을 차례대로 입력해주세요. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays(names); // 함수 calculateTravelDays 호출

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE]; // 3X2 사이즈의 2차원 배열 travelDays 선언

	// 각 도시에서 각 사람이 보낸 일 수 입력받기
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("도시 %s에서 사람 %s가 보낸 일 수를 입력하세요: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	double averageDays[NUMCITY];
	// 각 도시별 총 일 수 및 평균 일 수 계산 및 출력
	for (int i = 0; i < NUMCITY; i++) {
		int totalDay = getSum(travelDays[i], NUMPEOPLE);
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);
		printf("도시 %s에서 보낸 총 일수 : %d, 평균 일 수 : %.2f\n", cities[i], totalDay, averageDay);
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
	printf("평균일 기준으로 가장 인기있었던 도시는 %s 입니다. (평균머문일: %.2f)\n", cities[maxDayIndex], maxDay);
}
