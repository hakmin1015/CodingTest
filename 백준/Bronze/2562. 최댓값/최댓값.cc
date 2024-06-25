#include <stdio.h>

int main(void)
{
    int tmp, i, max=0,arr[9];
    for(i=0; i<9; i++)
        scanf("%d", &arr[i]);
    
    for(i=0; i<9; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
            tmp = i+1;
        }
    }
    printf("%d\n%d", max, tmp);
    
    return 0;
}