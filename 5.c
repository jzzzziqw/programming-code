#include <stdio.h>
#define PI (3.1415926536)

int main()
{
    float a;
    printf("���� ������: ");
    scanf("%f", &a);
    printf("���� �ѷ�����: %f\n", 2*PI*a);
    printf("���� ����: %f\n", PI*a*a);
    return 0;
}