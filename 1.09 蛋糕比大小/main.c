#include <stdio.h>
#include <stdlib.h>
/*
第一行是数据组数N，代表有N组测试实例
接下来有N行
每行有五个整数A,B,C,D,E（0<A,B,C,D,E<100）。
其中A代表小猪佩奇正方形蛋糕的边长
B,C代表松鼠西蒙长方形蛋糕的长和宽
D,E代表小熊贝琳达三角形蛋糕的底和高
如果小猪佩奇的蛋糕最大，输出“Perch”
如果松鼠西蒙的蛋糕最大，输出“Semon”
如果小熊贝琳达的蛋糕最大，输出“Belinda”
*/
int main()
{
    int n,i,a,b,c,d,e;
    double p,s,be;
    scanf("%d",&n); //获得测试实例数量
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
