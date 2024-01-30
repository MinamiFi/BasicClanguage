/*解题思路：
1.递推递推.先分析下直线分割平面的情况.增加第n条直线的时候.跟之前的直线最多有n-1个交点
此时分出的部分多出了（n-1）+1。
2.折线也是同理，f(1)=2.f(2)=7.先画好前面n-1条折线.当增加第n条,折线时
此时与图形新的交点最多有2*2（n-1）个
所以分出的部分多出了2*2（n-1）+1
所以推出f(n)=f(n-1)+4*(n-1)+1,n>=3*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,x,j,result;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        result=2;
        if(x!=1)
        {
            for(j=2;j<=x;j++)
                result=result+4*(j-1)+1;
        }
        printf("%d\n",result);
    }
    return 0;
}
