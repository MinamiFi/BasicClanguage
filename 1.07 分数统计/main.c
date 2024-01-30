#include <stdio.h>
#include <stdlib.h>
/*获得本次考试的平均分，以及高于平均分的人数有多少
如果分数和平均分一样，也计算在内*/
/*输入：输入数据首先是一个正整数C（C<=10），表示有C组测试用例
一行是一个正整数N（1<N<=59），表示有N位同学参加选拔考试
接下来一行是N个整数Si（0<=Si<=100），表示N位考生的成绩*/
/*输出：每组测试数据输出一行
分别是本次考试的平均成绩（结果保留2位小数）
和高于平均分的人数
中间用空格隔开*/
int main()
{
    int n,i,m,j,sum,x;
    double ave;
    sum=x=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)   //n组测验
    {
        scanf("%d",&m);  //m位同学
        int a[m];
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[j]);   //获得m位同学的成绩
            sum+=a[j];
        }
        ave=sum*1.0/m;
        for(j=0;j<m;j++)
        {
            if(a[j]>=ave)
                x++;
        }
        printf("%.2f %d\n",ave,x);
        x=sum=0;
    }
    return 0;
}
