#include <stdio.h>

int main(void)
{
    int N,x=0,y=0;
    scanf("%d", &N);
    
    if(N==4 || N==7)
        printf("-1");
    
    else
    {
        while((N-3*y)%5 != 0)
            y++;
        
        x = (N-3*y)/5;
      
        printf("%d", x+y);
    }
    
    return 0;
}