#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i;
    double c;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=1;i<=a;i++)
        {
            scanf("%d",&b);
            c+=b;
        }
        printf("%.0f\n",c);
        c=0;
    }
    return 0;
}
