#include <stdio.h>

int main(void)
{
    int x,y;
    scanf("%d %d", &x,&y);
    
    printf("%d\n%d\n%d\n%d\n%d",x+y,x-y,x*y,x/y,x%y);
    
    return 0;
}