#include <stdio.h>
#include <stdlib.h>
/*ѡ�ֵ÷ֹ���Ϊȥ��һ����߷ֺ�һ����ͷ֣�Ȼ�����ƽ���÷�
���������ж��飬ÿ��ռһ�У�ÿ�еĵ�һ������n(2<n<=100)����ʾ��ί��������Ȼ����n����ί�Ĵ��
����ÿ���������ݣ����ѡ�ֵĵ÷֣��������2λС����ÿ�����ռһ��*/
double max(double a,double b)  //�ҳ����ֵ
{
    if(a>b)
        b=a;
    return b;
}
double min(double a,double b)  //�ҳ���Сֵ
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
        scanf("%lf%lf",&m,&mi);  //��ȡ�����������С
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
