#include <stdio.h>

int main(void)
{
    char ch; //char형 변수 선언

    scanf("%c", &ch); //%c는 글자 입력, 입력된 문자의 원형이 아닌 이진으로 변환된 문자 코드를 ch 변수에 저장한다.
    printf("%c 문자의 ASCII 코드: %d(%x)\n", ch, ch, ch); // %c=ch 문자 코드의 문자형을 출력, %d=ch 문자 코드의 10진수를 출력, %x 문자 코드의 16진수를 출력.

    return 0; 
}

/* 해당 프로그램을 실행 후 a 라는 문자를 입력했을 경우 
ch 에 해당되는 메모리값에는 a 라는 문자의 문자 코드(2진수로 변환된 값)이 저장된다.
%c(문자형) 로 출력하면 문자 코드의 문자 형태 = a 를 출력
%d(10진수) 로 출력하면 문자 코드의 10진수 아스키코드 = 97를 출력
%x(16진수) 로 출력하면 문자 코드의 16진수 아스키코드 = 61