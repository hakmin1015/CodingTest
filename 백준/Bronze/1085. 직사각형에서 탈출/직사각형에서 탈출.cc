#include <stdio.h>

int main(void)
{
    int x,y,w,h,a,b;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    
    (x<w-x) ? a=x : a=w-x;
    (y<h-y) ? b=y : b=h-y;
    (a<b) ? printf("%d",a) : printf("%d", b);
    
    return 0;
}