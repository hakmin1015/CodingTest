#include <stdio.h>
#define SIZE 1000000

int main(void)
{
    int N, arr[SIZE], max=-1000000, min=1000000;
    scanf("%d", &N);
    
    for(int i=0; i<N; i++)
       scanf("%d", &arr[i]);
    
    for(int i=0; i<N; i++)
    {
        if(max<=arr[i])
            max = arr[i];
        if(min>=arr[i])
            min = arr[i];
    }
    
    printf("%d %d", min, max);
    
    return 0;
}

