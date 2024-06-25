#include <stdio.h>
#include <math.h>

int find_answer(double a, double b, double c);

int main(void)
{
    int i=0, T, x1, x2, y1, y2, r1, r2,ans;
    double dist1, dist2, dist3;
    
    scanf("%d", &T);

    while(i<T)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        dist1 = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
        dist2 = r1+r2;
        dist3 = abs(r2-r1);
        
        if(x1==x2 && y1==y2 && r1==r2)
        	ans = -1;
    	else
        	ans = find_answer(dist1, dist2, dist3);
        printf("%d\n", ans);
		i++;
    }
 
    return 0;
}

int find_answer(double a, double b, double c)
{
    if(a>b || a<c)
        return 0;
    else if(a==b || a==c)
        return 1;
    else if(a<b && a>c)
        return 2;
}