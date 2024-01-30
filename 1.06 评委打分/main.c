#include <stdio.h>
#include <stdlib.h>
/*选手得分规则为去掉一个最高分和一个最低分，然后计算平均得分
输入数据有多组，每组占一行，每行的第一个数是n(2<n<=100)，表示评委的人数，然后是n个评委的打分
对于每组输入数据，输出选手的得分，结果保留2位小数，每组输出占一行*/
double max(double a,double b)  //找出最大值
{
    if(a>b)
        b=a;
    return b;
}
double min(double a,double b)  //找出最小值
{
    if(a<b)
        b=a;
    return b;
}
int main()
{
    int n;
    double i,x,sum,m,mi,res;
    while(scanf("%d",&n)!=EOF)
    {
        scanf("%lf%lf",&m,&mi);  //先取两项最大与最小
        sum=m+mi;
        if(m<mi)
        {
            x=m;
            m=mi;
            mi=x;
        }
        for(i=3;i<=n;i++)
        {
            scanf("%lf",&x);
            m=max(x,m);
            mi=min(x,mi);
            sum=sum+x;
            if(i==n)
            {
                sum=sum-m-mi;
                res=sum/(n-2);
                printf("%.2f\n",res);
            }
        }
    }
    return 0;
}
