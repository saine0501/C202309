# include <stdio.h>
# define PI 3.1415926 // ��� PI ����

int main(void) {
	const int YEAR = 1972;
	printf("C �� ��ǥ�� ����: %d \n", YEAR);
	// YEAR = 1973;

	printf("���� ���� ���ϴ� ����: %.2f x ������^2", PI);
	// �Ǽ����̹Ƿ� ���� ������ %.nf ���, �Ҽ��� �Ʒ� 3��° �ڸ����� �ݿø��Ͽ� 3.14 ���
		
	return 0;
}