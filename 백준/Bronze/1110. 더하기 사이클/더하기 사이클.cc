#include <stdio.h>

int main(void)
{
    int a, b, c, tmp, cnt=0;
    scanf("%d", &a);
    tmp = a;
    c = a;
    
    while(1)
    {
        cnt++;
        b = (c%10) + (c/10);
        c = (c%10)*10 + (b%10);
        
        if(tmp==c)
            break;
    }
    printf("%d", cnt);
    
    return 0;
}