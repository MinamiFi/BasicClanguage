#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,count=0,a,b,i,j,h;
    scanf("%d%*c",&n);
    char cow[n];
    for(i=0; i<n; i++)      //获得奶牛的排列
        scanf("%c",&cow[i]);
    for(i=3; i<=n; i++)     //循环照片中牛的只数
    {
        for(j=0; j+i<=n; j++)      //循环照片从第j头牛开始拍
        {
            for(a=0,b=0,h=j;h<i+j;h++)//获得照片中牛的个数
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
