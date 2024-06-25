#include <stdio.h>
#define SIZE 9999

int main(void)
{
    int N, v, cnt=0, arr[SIZE];
    scanf("%d", &N);
    
    for(int i=0; i<N; i++)
        scanf("%d", &arr[i]);
    
    scanf("%d", &v);
    
    for(int i=0; i<N; i++)
    {
        if(arr[i] == v)
            cnt++;
    }
    
    printf("%d", cnt);
    
    return 0;
}