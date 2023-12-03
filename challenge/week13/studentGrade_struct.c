#include <stdio.h>
#include <stdlib.h>

struct StudentInfo {
    int num;
    char* name;
    int score;
};

void inputStudentInfo(struct StudentInfo* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        students[i].name = (char*)malloc(50 * sizeof(char));
        if (students[i].name == NULL) {
            printf("�޸� �Ҵ� ����\n");
            exit(1);
        }

        printf("�л� %d�� �̸��� �Է��ϼ���: \n", i + 1);
        scanf_s("%s", students[i].name, 50);

        printf("�л� %d�� ������ �Է��ϼ���: \n", i + 1);
        scanf_s("%d", &students[i].score);
    }
}

void freeStudentInfo(struct StudentInfo* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        free(students[i].name);
    }
    free(students);
}

void classifyStudents(struct StudentInfo* students, int numStudents, char targetGrade) {
    printf("�л� ���� �з�:\n");

    for (int i = 0; i < numStudents; i++) {
        char grade;

        if (students[i].score >= 90) {
            grade = 'A';
        }
        else if (students[i].score >= 80) {
            grade = 'B';
        }
        else if (students[i].score >= 70) {
            grade = 'C';
        }
        else if (students[i].score >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }

        if (targetGrade == grade) {
            printf("%d �л� %s�� %c ������ �޾ҽ��ϴ�.\n", students[i].num, students[i].name, targetGrade);
        }
    }
}

int sumScores(struct StudentInfo* students, int numStudents) {
    int sum = 0;
    for (int i = 0; i < numStudents; i++) {
        sum += students[i].score;
    }
    return sum;
}

double averageScores(struct StudentInfo* students, int numStudents) {
    int sum = sumScores(students, numStudents);
    return (double)sum / numStudents;
}

void printRanks(struct StudentInfo* students, int numStudents) {
    int* ranks = (int*)malloc(numStudents * sizeof(int));
    if (ranks == NULL) {
        printf("�޸� �Ҵ� ����\n");
        exit(1);
    }

    for (int i = 0; i < numStudents; i++) {
        ranks[i] = 1;
    }

    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < numStudents; j++) {
            if (students[j].score > students[i].score) {
                ranks[i]++;
            }
        }
    }

    for (int i = 0; i < numStudents; i++) {
        printf("%d �л� %s�� ������ %d �Դϴ�.\n", students[i].num, students[i].name, ranks[i]);
    }

    free(ranks);
}

int main() {
    int numStudents;

    printf("�л� ���� �Է��ϼ���: ");
    scanf_s("%d", &numStudents);

    struct StudentInfo* students = (struct StudentInfo*)malloc(numStudents * sizeof(struct StudentInfo));
    if (students == NULL) {
        printf("�޸� �Ҵ� ����\n");
        return 1;
    }

    for (int i = 0; i < numStudents; i++) {
        students[i].num = i + 1;
    }

    inputStudentInfo(students, numStudents);

    char target;
    printf("Ư�� ���� (A,B,C,D,F)�� �Է��ϼ���: ");
    scanf_s(" %c", &target, 1);

    classifyStudents(students, numStudents, target);

    int sum = sumScores(students, numStudents);
    double average = averageScores(students, numStudents);
    printf("�л����� ������ �� ���� %d �̰�, ��� ���� %lf �Դϴ�.\n", sum, average);

    printRanks(students, numStudents);

    freeStudentInfo(students, numStudents);

    return 0;
}
