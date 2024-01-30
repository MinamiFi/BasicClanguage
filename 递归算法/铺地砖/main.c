#include <stdio.h>
#include <stdlib.h>
/*学校教室的长度为n米，宽度为3米
现在我们有2种地砖，规格分别是1×1，2×2
如果要为该教室铺设地砖，请问有几种铺设方式呢？*/
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
