#include <stdio.h>

int main(void)
{
    int a,b,c,i;
    scanf("%d %d %d", &a, &b ,&c);
    i = (a/(c-b));
    if(b>=c)
        printf("-1");
    else
        printf("%d", i+1);
    return 0;
}
        