#include <stdio.h>
#include <stdlib.h>
/*ѧУ���ҵĳ���Ϊn�ף����Ϊ3��
����������2�ֵ�ש�����ֱ���1��1��2��2
���ҪΪ�ý��������ש�������м������跽ʽ�أ�*/
int main()
{
    int c,x,i,ans;
    scanf("%d",&c);
    while(c--)
    {
        scanf("%d",&x);
        if(x==1)
            ans=1;
        else
        {
            ans=3;
            for(i=2;i<x;i++)
                ans=ans*2-1;
        }
        printf("%d",ans);
    }
    return 0;
}
