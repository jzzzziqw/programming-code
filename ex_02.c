//2강 입력한 실수의 정수부/실수부를 구분 짓는 프로그램
#include<stdio.h>

int main(void)
{
 float num; //실수형 변수 선언, num은 실수형 변수의 변수명
 int i_part; //정수형 변수 선언
 float f_part;
 
 printf("실수를 입력하세요: ");
 scanf("%f", &num); //입력한 실수 값을 num이란 실수형 변수에 저장
 
 i_part = num; //num에서 정수부만 골라 저장
 f_part = num - i_part; //num에서 i_part의 값을 뺀 결과값만 저장
 
 printf("%f의 정수부는 %d이고, 실수부는 %f입니다.\n",num, i_part, f_part); 
 //num의 %f는 프로그램에 입력한 실수를 출력 ex) 3.145 > 3.14500
 //i_part의 %d는 입력한 실수의 정수부를 출력 ex) 3.145 > 3
 //f_part의 %f는 입력한 실수의 실수부를 출력 ex) 3.145 > 0.14500

 return 0;
 }

