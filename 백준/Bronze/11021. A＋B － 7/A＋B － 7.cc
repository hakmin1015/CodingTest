#include <stdio.h>

int main(void)
{
    int a,b,T;
    scanf("%d", &T);
    
    for(int i=0; i<T; i++)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i+1, a+b);
    }
    
    return 0;
}