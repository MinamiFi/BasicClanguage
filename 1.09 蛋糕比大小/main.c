#include <stdio.h>
#include <stdlib.h>
/*
��һ������������N��������N�����ʵ��
��������N��
ÿ�����������A,B,C,D,E��0<A,B,C,D,E<100����
����A����С�����������ε���ı߳�
B,C�����������ɳ����ε���ĳ��Ϳ�
D,E����С�ܱ��մ������ε���ĵ׺͸�
���С������ĵ�����������Perch��
����������ɵĵ�����������Semon��
���С�ܱ��մ�ĵ�����������Belinda��
*/
int main()
{
    int n,i,a,b,c,d,e;
    double p,s,be;
    scanf("%d",&n); //��ò���ʵ������
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        p=a*a;
        s=b*c;
        be=(double)d*e/2;
        if(p>s&&p>be)
            printf("Perch\n");
        else
        {
            if(s>be)
                printf("Semon\n");
            else
                printf("Belinda\n");
        }
    }
    return 0;
}
