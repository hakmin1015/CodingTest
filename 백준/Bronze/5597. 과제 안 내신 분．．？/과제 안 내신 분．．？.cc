#include <stdio.h>
#define SIZE 28
#define MaxSize 30

int main(void)
{
    int a[SIZE] = {0, };
    int b[2] = {0, };
    int k=0, tmp, key;
    
    for(int i=0; i<SIZE; i++)
        scanf("%d", &a[i]);
    
    for(int i=1; i<=MaxSize; i++){        // 1부터 30까지 숫자의 존재 여부를 전부 탐색
        key = 0;
        for(int j=0; j<SIZE; j++){
            if(i!=a[j])
                continue;
            else
                key++;
        }
        if(key==0)
            b[k++] = i;
    }
    
    if(b[0]>b[1]){
        tmp = b[0];
        b[0] = b[1];
        b[1] = tmp;
    }
    
    for(int i=0; i<2; i++)
        printf("%d\n", b[i]);
    
    return 0;
}