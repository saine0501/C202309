#include <stdio.h>

int main(void) {
	char str[256]; // 256개의 문자를 저장할 수 있는 문자열 str 선언
	scanf_s("%s", str, sizeof(str)); // 문자열 str을 입력받고, 문자열의 크기를 반환
	printf("%s\n", str); // 문자열 출력
	return 0;
}