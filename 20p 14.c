

#include <Stdio.h>

int main()
{
    int a, b;
    
    printf("�ڿ��� A: ");
    scanf_s("%d", &a);
    printf("�ڿ��� B: ");
    scanf_s("%d", &b);

    printf("�Էµ� �� �ڿ����� ��: %d (%d + %d = %d)\n", a + b, a, b, a + b);
    printf("�Էµ� �� �ڿ����� ��: %d (%d - %d = %d)", a - b, a, b, a - b);

    return 0;

}