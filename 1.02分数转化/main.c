#include <stdio.h>
#include <stdlib.h>
/*
90�����ϣ���90������ΪA
80��90֮�䣨��80������ΪB
70��80֮�䣨��70������ΪC
60��70֮�䣨��60������ΪD
60�����£���ΪE
������֪С����5�Ź��εİٷ��Ƴɼ����������Ӧ������Ƴɼ�
���������ж��飬ÿ��ռһ�У���һ��������ɡ�
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
