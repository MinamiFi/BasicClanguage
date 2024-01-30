#include <stdio.h>
#include <stdlib.h>
int main()
{
    int j,m,a;
    double sum;
    scanf("%d",&m); //该组共有几个数需要求和
    while(m!=0)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&a);
            sum+=1.0*a; //求和
        }
        printf("%.0f\n",sum);
        sum=0;
        scanf("%d",&m); //该组共有几个数需要求和
    }
    return 0;
}
