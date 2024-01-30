#include <stdio.h>
#include <stdlib.h>
double area (double *x)
{
    int i,j;
    double a[3][2],s;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            a[i][j]=*x;
            *x++;
        }
    }
    s=(a[0][0]*a[1][1]-a[0][0]*a[2][1]+a[1][0]*a[2][1]-a[1][0]*a[0][1]+a[2][0]*a[1][1]-a[3][0]*a[3][1])/2;
    return s;
}
int main()
{
    int i,j;
    double a[3][2];
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }
    printf("%f",area(&a[0][0]));
    return 0;
}
