#include <stdio.h>

int main()
{
	float a;

	printf("실수값 하나를 입력하세요: ");
	scanf_s("%f", &a);

	printf("입력된 실수값에 100을 곱한 값: %f", a * 100);

	return 0;
}