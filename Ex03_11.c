#include<stdio.h>

int main(void)
{
    char ch;
    int num;
    double fnum;

    printf("ch�� ����Ʈ ũ��: %d\n", sizeof ch);
    printf("num�� ����Ʈ ũ��: %d\n", sizeof num);
    printf("fnum�� ����Ʈ ũ��: %d\n", sizeof fnum);

    printf("3.14f�� ����Ʈ ũ��: %d\n", sizeof 3.14f);
    printf("char ���� ����Ʈ ũ�� : %d\n", sizeof(char));
    printf("short ���� ����Ʈ ũ�� : %d\n", sizeof(short));
    printf("int ���� ����Ʈ ũ�� : %d\n", sizeof(int));
    printf("long ���� ����Ʈ ũ�� : %d\n", sizeof(long));
    printf("float ���� ����Ʈ ũ�� : %d\n", sizeof(float));
    printf("double ���� ����Ʈ ũ�� : %d\n", sizeof(double));
    printf("long long ���� ����Ʈ ũ�� : %d\n", sizeof(long long));

    return 0;
}