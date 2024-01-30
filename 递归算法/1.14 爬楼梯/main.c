#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,x,n1=1,n2=2,result;
    scanf("%d",&n);
    while(n!=0)
    {
        n--;
        scanf("%d",&x);
        x--;
        if(x==1||x==2)
            printf("%d\n",x);
        else
        {
            n1=n2;
            n2=result;
            result=n1+n2;
            printf("%d\n",result);
        }
    }
    return 0;
}
