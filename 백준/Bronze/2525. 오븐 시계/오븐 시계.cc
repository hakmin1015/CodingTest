#include <stdio.h>

int main(void)
{
    int A, B, C;
    int H, M;
    scanf("%d %d", &A, &B);
    scanf("%d", &C);
    
    H = C/60;
    M = C%60;
    
    if((A+H)>23)
        A = (A+H)-24;
    else
        A = (A+H);
    
    if((B+M)>59)
    {
        B = (B+M)-60;
        A++;
        if(A>23)
            A=0;
    }
    else
        B = B+M;
    
    printf("%d %d", A, B);
    
    return 0;
}