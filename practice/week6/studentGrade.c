#include <stdio.h>
#define STUDENTS 5 // ������ ������ �����Ǵ� ��� STUDENTS 5

void classifyStudents(int scores[], char targetGrade) { // �Լ� classifyStudents ����
	printf("�л� ���� �з�:\n");
	char grade = ' '; // ������ ���� grade ���� �� �ʱ�ȭ
	for (int i = 0; i < STUDENTS; i++) { // i�� ��� STUDENTS�� ���� 5���� ���� �� �ݺ�
		if (scores[i] >= 90) {
			grade = 'A'; // scores[i]�� ���� 90 �̻��̸� A
		}
		else if (scores[i] >= 80) { 
			grade = 'B'; // scores[i]�� ���� 80 �̻��̸� B
		}
		else if (scores[i] >= 70) {
			grade = 'C'; // scores[i]�� ���� 70 �̻��̸� C
		}
		else if (scores[i] >= 60) {
			grade = 'D'; // scores[i]�� ���� 60 �̻��̸� D
		}
		else {
			grade = 'F'; // �� ���� ���� F
		}

		if (targetGrade == grade) { // �Է¹��� targetGrade�� ���� �л��� ������ ���� ���
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.", i + 1, targetGrade);
		}
	}
}

int main() {
	int scores[STUDENTS]; // int�� ������ �޴� �迭 ����

	for (int i = 0; i < STUDENTS; i++) { // i�� ��� STUDENTS�� ���� 5���� ���� �� �ݺ�
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]); // �л��� ����(int)�� �迭�� �Է¹ޱ�
	}

	char ch = getchar(); // ���� �ӽ� ���� ����

	char target; // ������ ���� char ����
	printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ�");
	scanf_s("%c", &target, 1); // ã���� �ϴ� ���� �� �Է¹ޱ�

	classifyStudents(scores, target); // classifyStudents �Լ� ȣ��

	return 0;
}