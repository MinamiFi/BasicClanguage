#include <stdio.h>
#include <stdlib.h>
/*
90分以上（含90），则为A
80和90之间（含80），则为B
70和80之间（含70），则为C
60和70之间（含60），则为D
60分以下，则为E
现在已知小明的5门功课的百分制成绩，请输出对应的五分制成绩
输入数据有多组，每组占一行，由一个整数组成。
*/
char score(int x)
{
    char sco;
    if (x>=90&&x<=100)
        sco='A';
    else if (x>=80&&x<=100)
        sco='B';
    else if (x>=70&&x<=100)
        sco='C';
    else if (x>=60&&x<=100)
        sco='D';
    else if (x>=0&&x<=100)
        sco='E';
    else
        sco='P';
    return sco;
}
int main()
{
    int a;
    char a1;
    while(scanf("%d",&a)!=EOF)
    {
        a1=score(a);
        if(a1!='P')
        {
            printf("%c\n",a1);
        }
        else
        {
            printf("Score is error!\n");
        }
    }

    return 0;
}
