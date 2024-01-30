#include <stdio.h>
#include <string.h>
int main()
{
    char a[51];
    int n,i,len,j;
    scanf("%d%*c",&n);
    for(i=1;i<=n;i++)
    {
        j=1;
        a[1]=getchar();
        while(a[j]!='\n')
        {
            j=j+1;
            a[j]=getchar();
        }
        len=j-1;
        for(j=len;j>=1;j--)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }
    return 0;
}
