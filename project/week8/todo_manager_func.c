#include <stdio.h>
#define MAX_TASKS 10 // �� �� ������ �ִ� ����
#define CHAR_NUM 100
#include <string.h>

char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // �� �ϵ��� �����ϱ� ���� 2���� �迭 ����
int taskCount = 0; // �� ���� ������ �����ϴ� ���� taskCount ���� �� �ʱ�ȭ

void addTask(char task[]); // addTask �Լ��� ���� ����
void delTask(int delIndex, int taskCount); // delTask �Լ��� ���� ����
void printTask(int taskCount); // printTask �Լ��� ���� ����

int main() {
	printf("TODO ����Ʈ ����! \n");

	while (1) {
		int choice = -1; // ����� �Է� ���� �����ϱ� ���� ���� choice ���� �� �ʱ�ȭ

		printf("------------------\n");
		printf("�޴��� �Է����ּ���.\n");
		printf("1. �� �� �߰�\n2. �� �� ����\n3. ��� ����\n4. ����\n5. �� �� ����\n");
		printf("���� �� �� �� = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice); // ����ڿ��� �Է� ���� ���� choice ������ ����

		int terminate = 0; // ���α׷� ���Ḧ ���� ������ ���� terminate ���� �� �ʱ�ȭ
		int delIndex = -1;  // �� �� ������ ���� ������ ���� delIndex ���� �� �ʱ�ȭ
		int changeIndex = -1; // �� �� ������ ���� ������ ���� changeIndex ���� �� �ʱ�ȭ
		char ch; // �� �� ������ ���۸� �ޱ� ���� ������ ���� ch

		switch (choice) {
		case 1: // ����ڰ� 1�� �Է��� ���, �� �� �߰�
			addTask(tasks[taskCount]); // �� �� �߰��� ����� �����ϴ� addTask �Լ� ȣ��
			taskCount++; // �� ���� ���� �����ϴ� ������ �� ����
			break;

		case 2: // ����ڰ� 2�� �Է��� ���, �� �� ����
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����): ");

			// ������ �� ���� ��ȣ�� ����ڿ��� �Է¹޾� delIndex ������ ����
			scanf_s("%d", &delIndex);

			// ����ڰ� ����� �� ���� �������� ū ��ȣ�� 0 ������ ��ȣ�� �Է��� ���
			if (delIndex > taskCount || delIndex <= 0) {
				printf("���� ������ ������ϴ�.\n");
			}
			else {
				delTask(delIndex, taskCount); // �� �� ������ ����� �����ϴ� delTask �Լ� ȣ��
				taskCount -= 1; // �� ���� ���� �����ϴ� ������ �� ����
			}
			break;

		case 3: // ����ڰ� 3�� �Է��� ���, ��� ����
			printf("�� �� ���\n");
			printTask(taskCount); // �� �� ����� ����� �����ϴ� printTask �Լ� ȣ��
			break;

		case 4: // ����ڰ� 4�� �Է��� ���, ���α׷� ����
			terminate = 1; // ���α׷� ���Ḧ ���� ���� �� ����
			break;

		case 5: // ����ڰ� 5�� �Է��� ���, �� �� ����
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):");

			// ������ �� ���� ��ȣ�� ����ڿ��� �Է¹޾� changeIndex ������ ����
			scanf_s("%d", &changeIndex);

			// ����ڰ� ����� �� ���� �������� ū ��ȣ�� 0 ������ ��ȣ�� �Է��� ���
			if (changeIndex > taskCount || changeIndex <= 0) {
				printf("���� ������ ������ϴ�.\n");
			}
			else {
				printf("%d. %s : �� ���� �����մϴ�.\n", changeIndex, tasks[changeIndex - 1]);
				
				// �Է¹��� ��ȣ�� �� �Ͽ� �ش��ϴ� �ε����� ���� ����
				strcpy_s(tasks[changeIndex - 1], sizeof(tasks[changeIndex - 1]), "");
				printf("���ο� �� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
				
				// ���Ӱ� �Է¹��� �� ���� tasks[changeIndex - 1]�� ����
				scanf_s("%s", tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex - 1]));
				printf("�� �� ""%d. %s""�� �����Ǿ����ϴ�\n\n", changeIndex, tasks[changeIndex - 1]);
			}
			break;
		
		default: // ����ڰ� 1~5�� �ƴ� �ٸ� ���� �Է��� ���
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
		}

		if (terminate == 1) { // terminate ���� 1�� �Ǹ� ���α׷� ����
			printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
			break;
		}

		// �� ���� ������ �ִ밪�� �Ǹ� ���α׷� ����
		if (taskCount == 10) {
			printf("�� ���� %d���� �� á���ϴ�.", taskCount);
			break;
		}
	}
	return 0;
}

void addTask(char task[]) {
	printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");

	// �� ���� �Է¹ް� �迭 tasks�� ����
	scanf_s("%s", task, (int)sizeof(task));
	strcpy_s(tasks[taskCount], sizeof(tasks[taskCount]), task);
	printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", task);
}

void delTask(int delIndex, int taskCount) {

	printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);

	// ������ �ε����� �ڿ� �ִ� �ε����� �� �� ��������
	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
	}
}

void printTask(int taskCount) {
	for (int i = 0; i < taskCount; i++) { // ����� �� ���� ������ taskCount ��ŭ �ݺ�
		printf("%d. %s \n", i + 1, tasks[i]); // ����� �� ���� ��ȣ�� ���� ���
	}
	printf("\n");
}