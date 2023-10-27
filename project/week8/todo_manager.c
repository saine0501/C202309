#include <stdio.h>
#define MAX_TASKS 10 // �� �� ������ �ִ� ����
#define CHAR_NUM 100
#include <string.h>

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // �� �ϵ��� �����ϱ� ���� 2���� �迭 ����
int taskCount = 0; // �� ���� ������ �����ϴ� ���� taskCount ���� �� �ʱ�ȭ

	printf("TODO ����Ʈ ����! \n");

	while (1) {
		int choice = -1; // ����� �Է� ���� �����ϱ� ���� ���� choice ���� �� �ʱ�ȭ

		printf("------------------\n");
		printf("�޴��� �Է����ּ���.\n");;
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
			printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");

			// �Է¹��� �� ���� �迭 tasks�� ����
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount])); 
			printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", tasks[taskCount]); 
			taskCount++; // �� ���� ���� �����ϴ� ������ �� ����
			break;

		case 2: // ����ڰ� 2�� �Է��� ���, �� �� ����
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):");

			// ������ �� ���� ��ȣ�� ����ڿ��� �Է¹޾� delIndex ������ ����
			scanf_s("%d", &delIndex);

			// ����ڰ� ����� �� ���� �������� ū ��ȣ�� 0 ������ ��ȣ�� �Է��� ���
			if (delIndex > taskCount || delIndex <= 0) {
				printf("���� ������ ������ϴ�.\n");
			}
			else {
				printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);

				// ���ڿ� ���� �Լ��� �̿��� �Է¹��� ��ȣ�� �� �Ͽ� �ش��ϴ� �ε����� ���� ����
				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

				// �ش� �ε����� �ڿ� �ִ� �ε����� �� �� ��������
				for (int i = delIndex; i < taskCount + 1; i++) {
					strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
				}
				taskCount -= 1; // �� ���� ���� �����ϴ� ������ �� ����
			}
			break;

		case 3: // ����ڰ� 3�� �Է��� ���, ��� ����
			printf("�� �� ���\n");

			// ����� �� ���� ������ taskCount ��ŭ �ݺ�
			for (int i = 0; i < taskCount; i++) {
				printf("%d. %s \n", i + 1, tasks[i]); // ����� �� ���� ��ȣ�� ���� ���
			}
			printf("\n");
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
		if (taskCount == MAX_TASKS) { 
			printf("�� ���� �� á���ϴ�. ���α׷��� �����մϴ�.\n");
			terminate = 1; // ���α׷� ���Ḧ ���� ���� �� ���� 
			break;
		}

	}
}