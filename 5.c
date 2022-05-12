#include <stdio.h>
#define PI (3.1415926536)

int main()
{
    float a;
    printf("원의 반지름: ");
    scanf("%f", &a);
    printf("원의 둘레길이: %f\n", 2*PI*a);
    printf("원의 넓이: %f\n", PI*a*a);
    return 0;
}