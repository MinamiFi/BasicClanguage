#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d%*c",&n);
    char str[n][21],(*p[n])[21],(*t)[21];
    for(int i=0;i<n;i++)
    {
        p[i]=&str[i];
        gets(*(str+i));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            if(strcmp(*p[j],*p[j-1])<0)
            {
                t=p[j];
                p[j]=p[j-1];
                p[j-1]=t;
            }
        }
        printf("%s\n",*p[i]);      //从小到大输出
    }
    return 0;
}
