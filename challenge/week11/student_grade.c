#include <stdio.h>
#define STUDENTS 5 // ������ ������ �����Ǵ� ��� STUDENTS 5

void classifyStudents(int* scores, char targetGrade) { // �Լ� classifyStudents ����
	printf("�л� ���� �з�:\n");

	char grade = ' '; // ������ ���� grade ���� �� �ʱ�ȭ
	for (int i = 0; i < STUDENTS; i++) { // i�� ��� STUDENTS�� ���� 5���� ���� �� �ݺ�
		int* p = scores + i;

		if (*p >= 90) {
			grade = 'A'; // scores[i]�� ���� 90 �̻��̸� A
		}
		else if (*p >= 80) {
			grade = 'B'; // scores[i]�� ���� 80 �̻��̸� B
		}
		else if (*p >= 70) {
			grade = 'C'; // scores[i]�� ���� 70 �̻��̸� C
		}
		else if (*p >= 60) {
			grade = 'D'; // scores[i]�� ���� 60 �̻��̸� D
		}
		else {
			grade = 'F'; // �� ���� ���� F
		}

		if (targetGrade == grade) { // �Է¹��� targetGrade�� ���� �л��� ������ ���� ���
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.\n", i + 1, targetGrade);
		}

		p++;
	}
}

int sumScores(int* scores) { // �Լ� sumScores ����
	int sum = 0; // int�� ���� sum ���� �� �ʱ�ȭ
	int* p = scores;

	for (int i = 0; i < STUDENTS; i++) {
		sum += *p; // ���� sum�� �Է¹��� �迭 scores[i]�� �� ����
		p++;
	}
	return sum; // sum �� ��ȯ
}

double averageScores(int* scores) { // �Լ� averageScores ����
	int sum = 0; // int�� ���� sum ���� �� �ʱ�ȭ
	double average; // double�� ���� average ����
	int* p = scores;

	for (int i = 0; i < STUDENTS; i++) {
		sum += *p; // ���� sum�� �Է¹��� �迭 scores[i]�� �� ����
		p++;
	}

	average = (double)sum / STUDENTS; // sum�� ���� ��� STUDENTS�� ������ ���� ���� average ������ ����
	return average; // average �� ��ȯ
}

void printRanks(int* scores) {
	int ranks[STUDENTS]; // ������ ������ int �迭 ranks ����

	for (int i = 0; i < STUDENTS; i++) { // i�� ��� STUDENTS�� ���� 5���� ���� �� �ݺ�
		ranks[i] = 1; // ��� �л��� ������ 1���� �ʱ�ȭ
	}

	for (int i = 0; i < STUDENTS; i++) {
		int* p = scores + i;
		for (int j = 0; j < STUDENTS; j++) {
			if (*(scores + j) > *p) {
				ranks[i]++; // j�� �л��� i�� �л����� ���� ������ ������ ���� �� ���� ����
			}
		}
	}

	for (int i = 0; i < STUDENTS; i++) {
		printf("%d �л��� ������ %d �Դϴ�.\n", i + 1, ranks[i]); // �л��� ��ȣ�� ���� ���
	}
}

int main() {
	int scores[STUDENTS]; // int�� ������ �޴� �迭 ����

	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]); // �л��� ����(int)�� �迭�� �Է¹ޱ�
	}

	char ch = getchar(); // ���� �ӽ� ���� ����

	char target; // ������ ���� char ����
	printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ�");
	scanf_s("%c", &target, 1); // ã���� �ϴ� ���� �� �Է¹ޱ�

	classifyStudents(scores, target); // classifyStudents �Լ� ȣ��

	int sum = sumScores(scores); // int ���� sum�� �Լ� sumScores(scores)�� �� ����
	double average = averageScores(scores); // double ���� average�� �Լ� averageScores(scores)�� �� ����
	printf("�л����� ������ �� ���� %d �̰�, ��� ���� %lf �Դϴ�.\n", sum, average);

	printRanks(scores); // printRanks �Լ� ȣ��

	return 0;
}