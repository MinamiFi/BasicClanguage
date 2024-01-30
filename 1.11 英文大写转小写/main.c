#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,n,j;
    char w[30];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",w);
        strlwr(w);
        printf("%s\n",w);
    }
    return 0;
}
