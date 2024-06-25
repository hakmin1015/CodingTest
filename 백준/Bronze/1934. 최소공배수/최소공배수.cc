#include <stdio.h>
#define SIZE 1000

int gcd(int a,int b)
{
    int r;
    while(b!=0)
    {
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main(void)
{
    int A,B,T;
    int lcm[SIZE] = {0,};
    
    scanf("%d", &T);
    
    for(int i=0; i<T; i++)
    {
        scanf("%d %d", &A, &B);
        int tmp = 0;
        if(A<B)
        {
            tmp = A;
            A = B;
            B = tmp;
        }
        lcm[i] = (A*B)/gcd(A,B);
    }
    
    for(int i=0; i<T; i++)
    {
        printf("%d\n", lcm[i]);
    }
    
    return 0;
}