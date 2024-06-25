#include <stdio.h>

int main(void)
{
    int k,n,T,i,j,m,p,q;
    scanf("%d", &T);
    int test[T] = {0};
    int array[14][14] = {0};
    p = 0;
    
    array[13][0] = 1;
    
	for(i=1; i<14; i++)
        array[13][i] = array[13][i-1] + (i+1);
    	
    for(i=1; i<14; i++)
        for(q=0; q<14; q++)
           for(j=0; j<=q; j++)
		    	array[13-i][q] += array[14-i][j];

    while(p<T)
    {
        scanf("%d", &k);
        scanf("%d", &n);
        test[p] = array[14-k][n-1];
        p++;
    }
    
    for(p=0; p<T; p++)
        printf("%d\n", test[p]);
    
    return 0;
}