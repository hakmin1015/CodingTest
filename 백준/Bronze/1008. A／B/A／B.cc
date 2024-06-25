#include <stdio.h>

int main(void)
{
    int x,y;
    scanf("%d %d", &x, &y);
    
    printf("%.9lf", double(x)/y);
    
    return 0;
}