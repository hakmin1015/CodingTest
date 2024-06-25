#include <stdio.h>

int main(void)
{
    int x,y,a,b,c,d;
    scanf("%d", &x);
    scanf("%d", &y);
    
    a = x*(y%10);
    b = x*((y/10)%10);
    c = x*(y/100);
    d = a+b*10+c*100;
    
    printf("%d\n%d\n%d\n%d",a,b,c,d);
    
    return 0;
}