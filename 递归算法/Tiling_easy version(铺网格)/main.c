#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,x,y,ans,i;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        if(n==1)
            ans=1;
        else if (n==2)
            ans=3;
        else
        {
            x=1;
            y=3;
            for (i=3;i<=n;i++)
            {
                ans=2*x+y;
                x=y;
                y=ans;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
