#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,a,b,c,i,x,y,sum;
    scanf("%d",&n);
    while(n!=0)
    {
        n--;
        scanf("%d%d",&a,&b);
        c=abs(a-b);
        if(c==1||c==2)
            printf("%d\n",c);
        else
        {
            for(i=1,x=1,y=2;i<=c-2;i++)
            {
                sum=x+y;
                x=y;
                y=sum;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
