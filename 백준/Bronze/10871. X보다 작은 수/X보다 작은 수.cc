#include <stdio.h>
#define SIZE 10000
int main(void)
{
    int N,X,arr_1[SIZE],arr_2[SIZE]={0,};
    scanf("%d %d", &N, &X);
    
    for(int i=0; i<N; i++)
        scanf("%d", &arr_1[i]);
    
    for(int i=0; i<N; i++)
    {
        if(arr_1[i]<X)
            arr_2[i] = arr_1[i];
    }
    
    for(int i=0; i<N; i++)
    {
        if(arr_2[i]!=0)
            printf("%d ", arr_2[i]);            
    }
    
    return 0;
}