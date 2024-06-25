#include <stdio.h>

int main(void)
{
	int K,i,sum=0;
	scanf("%d", &K);
	int arr[K];
    
	for(i=0; i<K; i++)
	{
		scanf("%d", &arr[i]);
		if(arr[i]==0)
		{
			arr[i-1] = 0;
			K-=2;
			i-=2;
		}
	}
	for(i=0; i<K; i++)	
        sum +=arr[i];
	printf("%d", sum);
    
    return 0;
}