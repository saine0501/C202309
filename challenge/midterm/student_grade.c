#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

void printStudentsResults(double doubleArray[STUDENTS][SUBJECTS],
                          char charArray[STUDENTS][CHARNUM]);

void printSubjectResults(double doubleArray[STUDENTS][SUBJECTS],
                         char charArray[SUBJECTS][CHARNUM]);

int main() {
  char subjectNames[SUBJECTS][CHARNUM] = {"����", "�߰����", "�⸻���"};
  char studentNames[STUDENTS][CHARNUM] = {""};  // �л� �̸��� ����� �迭
  double studentScores[STUDENTS][SUBJECTS] = {0.0};  // �л��� ���� �� ������ ������ ����� �迭
  printf("�л� %d���� �̸��� �Է��� �����մϴ�. \n", STUDENTS);
  // TODO 1.1: �л� �̸��� �Է¹޴� �ڵ� ��� �ۼ�
  for (int i = 0; i < STUDENTS; i++) {
    printf("\t%d��° �л��� �̸��� �Է��ϼ���: ", i + 1);
    scanf_s("%s", studentNames[i], (int)sizeof(studentNames[i]));
  }

  // �Էµ� �л� �̸��� �� ����Ǿ����� Ȯ���ϴ� �ڵ� ���
  printf("�л� �̸��� ��� �ԷµǾ����ϴ�. \n");
  printf("�Էµ� �л� �̸��� ������ �����ϴ�. \n");
  for (int i = 0; i < STUDENTS; i++) {
    printf("%s", studentNames[i]);
    if (i != STUDENTS - 1) {
      printf(", ");
    }
  }
  printf("\n");
  printf("--------------------\n");
  printf("�� �л��� %s, %s, %s ������ ���ʴ�� �Է����ּ���. (���� ����)\n",
         subjectNames[0], subjectNames[1], subjectNames[2]);

  // TODO 1.2: �л����� ���� �� ������ �Է¹޴� �ڵ� ��� �ۼ�
  for (int i = 0; i < STUDENTS; i++) {
    printf("\t%s�� ����: ", studentNames[i]);
    for (int j = 0; j < SUBJECTS; j++) {
      scanf_s("%lf", &studentScores[i][j]);
    }
  }

  printf("�л����� ���� ������ ��� �Է� �Ǿ����ϴ�.\n");
  printf("--------------------\n");
  printf("�л� �� ������ ������ �����ϴ� \n");

  // TODO 1.3: �л� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ
  // HINT1: 2�� for��: (1) �л��� (2) ������� ���� �հ� ����� ���ϰ� ���
  // HINT2: ��¹� �ڵ� = printf("\t%s�� ��� ����: %.2lf\n", studentNames[i],
  // finalScore);

  printStudentsResults(studentScores, studentNames);

  printf("--------------------\n");
  printf("���� �� ��� ������ �Ʒ��� �����ϴ�. \n");
  // TODO 1.4: ���� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ
  // HINT1: 2�� for������ (1) ���� (2) �л����� ���� �հ� ����� ���ϰ� ���
  // HINT2: ��¹� �ڵ� = printf("\t%s�� ��� ������ %.2lf �Դϴ�.\n",
  // subjectNames[i], subjectScore);

  printSubjectResults(studentScores, subjectNames);

  printf("���α׷��� �����մϴ�. ");
  return 0;
}

void printStudentsResults(double doubleArray[STUDENTS][SUBJECTS],
                          char charArray[STUDENTS][CHARNUM]) {

  for (int i = 0; i < STUDENTS; i++) {
      double totalScores = 0;
      for (int j = 0; j < SUBJECTS; j++) {
      totalScores += doubleArray[i][j];
      }
      double finalScore = totalScores / SUBJECTS;
      printf("\t%s�� ��� ����: %.2lf\n", charArray[i], finalScore);
  }
}

void printSubjectResults(double doubleArray[STUDENTS][SUBJECTS],
                         char charArray[SUBJECTS][CHARNUM]) {

  for (int i = 0; i < SUBJECTS; i++) {
      double totalScores = 0;
      for (int j = 0; j < STUDENTS; j++) {
      totalScores += doubleArray[j][i];
      }
      double subjectScore = totalScores / STUDENTS;
      printf("\t%s�� ��� ������ %.2lf �Դϴ�.\n", charArray[i], subjectScore);
  }
}
