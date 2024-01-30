#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c,n,i,j,max=0;
    scanf("%d",&c);
    while(c--)
    {
        scanf("%d",&n);
        int a[n],ans0[n],ans1[n];
        for(i=0;i<n;i++)
        {
            a[i]=0;
            ans0[i]=0;
            ans1[i]=0;
        }
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[0]);
            ans1[0]=ans0[0]+a[0];
            for(j=1;j<i;j++)
            {
                scanf("%d",&a[j]);
                if(ans0[j-1]>ans0[j])
                    ans1[j]=ans0[j-1]+a[j];
                else
                    ans1[j]=ans0[j]+a[j];
            }
            for(j=0;j<n;j++)
                ans0[j]=ans1[j];
        }
        for(i=0;i<n;i++)
        {
            if(max<ans1[i])
                max=ans1[i];
        }
        printf("%d\n",max);
        max=0;
    }
    return 0;
}
