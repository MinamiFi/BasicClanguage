#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,r,x,ans;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==1)
            ans=3;
        else if(n==2)
            ans=6;
        else
        {
            for(i=3,r=0,x=1;i<n;i++)
            {
                r=x-r;
                x=x*2;
            }
        ans=6*(2*r+(x-r));
        }
        printf("%d\n",ans);
    }
    return 0;
}
