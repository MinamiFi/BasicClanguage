#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    int c=0;
    int i;
    scanf("%d",&N);
    for(i=(int)(pow(10,N-1)); i<(int)(pow(10,N)); i++)
    {
        c = 0;
        int s = i;
        while(s!=0)
        {
            c=c+(int)(pow(s%10,3));
            s=s/10;
        }
        if(c==i)
        {
            printf("%d\n",c);
        }
    }
    return 0;
}
