#include <stdio.h>

int main(void)
{
    const double pi = 3.14;
    const int max; //초기화 되지 않음, const로 변수 선언 시 초기화는 필수.

    printf("pi = %f\n", pi);
    printf("max = %d\n", max);

    // pi = 3.1415; //error: assignment of read-only variable 'pi' pi = 3.1415;
    // max = 100; //error: assignment of read-only variable 'max' max = 100; < 컴파일 과정에서 해당 에러 로그 출력

    return 0;
}

/* 실행 결과

pi = 3.140000
max = 12722248