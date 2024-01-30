#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,f,o,ans,i;
    while(scanf("%d",&x)!=EOF)
    {
        if(x==1)
            ans=3;
        else
        {
            f=3;
            o=1;
            for(i=2;i<=x;i++)
            {
                ans=3*f-o;
                o=f-o;
                f=ans;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
