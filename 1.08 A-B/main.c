#include <stdio.h>
#include <math.h>
int main()
{
    int a ,b ,c ;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a==0&&b==0)
            goto LOOP;
        else
        {
            c=fabs(a-b);
            printf("%d\n",c);
        }
    }
    LOOP:return 0;
}
