#include <stdio.h>
#include <stdlib.h>
//�������ݵĵ�һ����һ��������N��
//��ʾ��N��������ݣ�Ȼ����N�����ݣ�ÿ�а�����������A��B��C��
int judge(int a,int b,int c)
{
    int jud=0;
    if (a+b>c)
        if (b+c>a)
            if (a+c>b)
                jud=1;
    return jud;
}
int main()
{
    int i,n,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(judge(a,b,c))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
