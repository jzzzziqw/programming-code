#include <stdio.h>

int main(void)
{
    const double pi = 3.14;
    const int max; //�ʱ�ȭ ���� ����, const�� ���� ���� �� �ʱ�ȭ�� �ʼ�.

    printf("pi = %f\n", pi);
    printf("max = %d\n", max);

    // pi = 3.1415; //error: assignment of read-only variable 'pi' pi = 3.1415;
    // max = 100; //error: assignment of read-only variable 'max' max = 100; < ������ �������� �ش� ���� �α� ���

    return 0;
}

/* ���� ���

pi = 3.140000
max = 12722248