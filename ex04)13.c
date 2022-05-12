#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, m, s;

    printf("hour: "); scanf("%d", &h);
    printf("minute: "); scanf("%d", &m);
    printf("second: "); scanf("%d", &s);
    printf("%d초입니다.\n", h*3600+m*60+s);
    return 0;
}

