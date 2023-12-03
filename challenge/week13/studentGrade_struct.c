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
            printf("메모리 할당 오류\n");
            exit(1);
        }

        printf("학생 %d의 이름을 입력하세요: \n", i + 1);
        scanf_s("%s", students[i].name, 50);

        printf("학생 %d의 성적을 입력하세요: \n", i + 1);
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
    printf("학생 성적 분류:\n");

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
            printf("%d 학생 %s은 %c 점수를 받았습니다.\n", students[i].num, students[i].name, targetGrade);
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
        printf("메모리 할당 오류\n");
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
        printf("%d 학생 %s의 순위는 %d 입니다.\n", students[i].num, students[i].name, ranks[i]);
    }

    free(ranks);
}

int main() {
    int numStudents;

    printf("학생 수를 입력하세요: ");
    scanf_s("%d", &numStudents);

    struct StudentInfo* students = (struct StudentInfo*)malloc(numStudents * sizeof(struct StudentInfo));
    if (students == NULL) {
        printf("메모리 할당 오류\n");
        return 1;
    }

    for (int i = 0; i < numStudents; i++) {
        students[i].num = i + 1;
    }

    inputStudentInfo(students, numStudents);

    char target;
    printf("특정 점수 (A,B,C,D,F)를 입력하세요: ");
    scanf_s(" %c", &target, 1);

    classifyStudents(students, numStudents, target);

    int sum = sumScores(students, numStudents);
    double average = averageScores(students, numStudents);
    printf("학생들의 점수의 총 합은 %d 이고, 평균 값은 %lf 입니다.\n", sum, average);

    printRanks(students, numStudents);

    freeStudentInfo(students, numStudents);

    return 0;
}
