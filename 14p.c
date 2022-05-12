#include <stdio.h>

int main()
{
	char a;
	int b;
	float c;

	printf("문자를 입력하세요: "); scanf_s("%c", &a);
	printf("정수를 입력하세요: "); scanf_s("%d", &b);
	printf("실수를 입력하세요: "); scanf_s("%f", &c);

	printf("문자 = %c, 정수 = %d, 실수 = %f", a, b, c);

	return 0;
}