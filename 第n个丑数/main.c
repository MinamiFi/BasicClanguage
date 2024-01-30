#include <stdio.h>
#include <stdlib.h>

int judge(int n)
{
    while(n!=1)
    {
        if(n % 2 == 0)
        {
            n /= 2;
        }
        else if(n % 3 == 0)
        {
            n /= 3;
        }
        else if(n % 5 == 0)
        {
            n /= 5;
        }
        else if(n % 7 == 0)
        {
            n /= 7;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a[5843]= {0},n,k=0,i;
    scanf("%d",&n);
    while (n!=0)
    {
        if(n>k)
        {
            for(i=a[k]+1;n>k; i++)
            {
                if(judge(i))
                {
                    k++;
                    a[k]=i;
                }
            }
        }
        printf("%d\n",a[n]);
        scanf("%d",&n);
    }
    return 0;
}
