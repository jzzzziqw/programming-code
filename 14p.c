#include <stdio.h>

int main()
{
	char a;
	int b;
	float c;

	printf("���ڸ� �Է��ϼ���: "); scanf_s("%c", &a);
	printf("������ �Է��ϼ���: "); scanf_s("%d", &b);
	printf("�Ǽ��� �Է��ϼ���: "); scanf_s("%f", &c);

	printf("���� = %c, ���� = %d, �Ǽ� = %f", a, b, c);

	return 0;
}