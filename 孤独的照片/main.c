#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,count=0,a,b,i,j,h;
    scanf("%d%*c",&n);
    char cow[n];
    for(i=0; i<n; i++)      //�����ţ������
        scanf("%c",&cow[i]);
    for(i=3; i<=n; i++)     //ѭ����Ƭ��ţ��ֻ��
    {
        for(j=0; j+i<=n; j++)      //ѭ����Ƭ�ӵ�jͷţ��ʼ��
        {
            for(a=0,b=0,h=j;h<i+j;h++)//�����Ƭ��ţ�ĸ���
            {
                if(cow[h]=='G')
                    a++;
                else if(cow[h]=='H')
                    b++;
            }
            if(a==1||b==1)
                count++;
        }
    }
    printf("%d",count);
    return 0;
}
