#include <stdio.h>
#include <stdlib.h>
int main()
{
    int j,m,a;
    double sum;
    scanf("%d",&m); //���鹲�м�������Ҫ���
    while(m!=0)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&a);
            sum+=1.0*a; //���
        }
        printf("%.0f\n",sum);
        sum=0;
        scanf("%d",&m); //���鹲�м�������Ҫ���
    }
    return 0;
}
