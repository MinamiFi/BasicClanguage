#include <stdio.h>
#include <stdlib.h>
/*����һ���ַ�������ȡ���е����֣�����һ�𹹳�һ������
�ٳ���513*/
int main()
{
    int i , n,j;
    unsigned int res,s;
    char a[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=1;
        a[j]=getchar();
        while(a[j]!='\0')
        {
            j=j+1;
            a[j]=getchar();
            if(a[j]>='0'&&a[j]<='9')
                s=s*10+(int)(a[j]);
        }
        res=s*513;
        printf("%u",res);
    }
    return 0;
}
