#include <stdio.h>

int main(void)
{
    int X,N,a,b,sum=0;
    scanf("%d", &X);
    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        scanf("%d %d", &a, &b);
        sum += a*b;
    }
    
    if(sum==X)
        printf("Yes");
    else
        printf("No");
    
    return 0;
}