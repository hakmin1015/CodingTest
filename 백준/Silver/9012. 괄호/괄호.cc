#include <stdio.h>
#include <string.h>

int main(void)
{
    int T,a,b,i,loc;
    char *p;
    
    scanf("%d", &T);
    int count[T];
    
    while(T--)
    {
    	char str[51] = "";
    	a=0, b=0;
        scanf("%s", str);
        for(i=0; str[i]!=NULL; i++)
        {
            if(str[i] == '(')
                a++;
            if(str[i] == ')')
                b++;
        }
        
        p = strchr(str, '\0');
        loc = (int)(p - str);
        
        if((a!=b)||str[loc-1]!=')'||str[0]!='(')
            printf("NO\n");
        
        if((a==b)&&str[loc-1]==')'&&str[0]=='('){
            for(i=0; str[i]!=NULL; i++){
                if(str[i]=='(')
                    a--;
                else
                    b--;
                if(a>b){
                    printf("NO\n");
                    break;
                }
                else if(a==0&&b==0){
                	printf("YES\n");
                	break;
				}
            }
        }
    }
    return 0;
}