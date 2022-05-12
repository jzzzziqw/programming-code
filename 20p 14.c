

#include <Stdio.h>

int main()
{
    int a, b;
    
    printf("자연수 A: ");
    scanf_s("%d", &a);
    printf("자연수 B: ");
    scanf_s("%d", &b);

    printf("입력된 두 자연수의 합: %d (%d + %d = %d)\n", a + b, a, b, a + b);
    printf("입력된 두 자연수의 차: %d (%d - %d = %d)", a - b, a, b, a - b);

    return 0;

}