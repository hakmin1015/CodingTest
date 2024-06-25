#include <stdio.h>
#define SIZE 1000

void swap(int &A, int &B)         // call by reference
{
	int tmp;
	tmp = A;
	A = B;
	B = tmp;
}

int main(void)
{
    int N, a[SIZE] = {0, };
    scanf("%d", &N);
    
    for(int i=0; i<N; i++)
        scanf("%d", &a[i]);
    
	int i,j;
	for(i=0; i<N-1; i++)					// Bubble Sort Algorithm
	{
		for(j=N-1; j>i; j--)
		{
			if(a[j-1] > a[j])			// 왼쪽 원소가 오른쪽 원소보다 크면 swap 실행 
				swap(a[j-1], a[j]);
		}
	}
	
	for(int k=0; k<N; k++)
		printf("%d\n", a[k]);				// print a sorted array
	
	return 0;
}