//2�� �Է��� �Ǽ��� ������/�Ǽ��θ� ���� ���� ���α׷�
#include<stdio.h>

int main(void)
{
 float num; //�Ǽ��� ���� ����, num�� �Ǽ��� ������ ������
 int i_part; //������ ���� ����
 float f_part;
 
 printf("�Ǽ��� �Է��ϼ���: ");
 scanf("%f", &num); //�Է��� �Ǽ� ���� num�̶� �Ǽ��� ������ ����
 
 i_part = num; //num���� �����θ� ��� ����
 f_part = num - i_part; //num���� i_part�� ���� �� ������� ����
 
 printf("%f�� �����δ� %d�̰�, �Ǽ��δ� %f�Դϴ�.\n",num, i_part, f_part); 
 //num�� %f�� ���α׷��� �Է��� �Ǽ��� ��� ex) 3.145 > 3.14500
 //i_part�� %d�� �Է��� �Ǽ��� �����θ� ��� ex) 3.145 > 3
 //f_part�� %f�� �Է��� �Ǽ��� �Ǽ��θ� ��� ex) 3.145 > 0.14500

 return 0;
 }
