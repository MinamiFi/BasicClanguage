#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,x,y,result=1;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==1||n==2)
            result=n;
        else
        {
            for(i=3,x=1,y=2;i<=n;i++)
            {
                result=x+y;
                x=y;
                y=result;
            }
        }
        printf("%d\n",result);
    }
    return 0;
}
