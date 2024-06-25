#include <stdio.h>

int main(void)
{
    int a[6];
    for(int i=0; i<6; i++)
        scanf("%d", &a[i]);
    
    printf("%d ", 1-a[0]);
    printf("%d ", 1-a[1]);
    printf("%d ", 2-a[2]);
    printf("%d ", 2-a[3]);
    printf("%d ", 2-a[4]);
    printf("%d ", 8-a[5]);
    
    return 0;
}