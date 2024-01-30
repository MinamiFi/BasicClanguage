#include <stdio.h>
#include <stdlib.h>
#define INF 0x7fffffff
int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b; //由小到大排序
    //return *(int *)b - *(int *)a; 由大到小排序
}
int min (int a, int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    int dp[n];
    int w[n+1];
    for(i=1; i<=n; i++)
        scanf("%d",w+i);
    qsort(w, n, sizeof(w[0]), cmp);
    dp[0]=INF;
    for(i=1; i<=n; i++)
        dp[i]=0;
    for(i=1;i<=k;i++)           //找出取i组的最优解
    {
        for(j=1;j<=n-2*(k-1);j++)          //找出在取出第i组的情况下有j个行李的最优解
        {
            dp[j]=min( dp[j-1] , dp[j]+(w[2*(i-1)+j]-w[2*(i-1)+j+1] )*( w[2*(i-1)+j]-w[2*(i-1)+j+1] ) );
        }
    }
    printf("%d",dp[n-2*(k-1)]);
    return 0;
}
