#include <stdio.h>

int main(void)
{
    int a,b,c,x;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a==b && b==c && c==a)
        printf("%d",10000+a*1000);
    else if(a==b || b==c || c==a)
    {
        if(a==b)
            x = a;
        if(b==c)
            x = b;
        printf("%d", 1000+x*100);    
    }
    
    else if(a!=b && b!=c && c!=a)
    {
        if(a>b)
            x = a;
        else
            x = b;
        if(c>x)
            x = c;
        printf("%d", x*100);
    }
    
    return 0;
}