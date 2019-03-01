#include <stdio.h>

int main()
{
    int sec,m,h;
    scanf("%d",&sec);
    h = sec / 3600;
    sec = sec%3600;
    m = sec/60;
    sec = sec%60;
    printf("%d %d %d", h, m, sec);
    return 0;
}
