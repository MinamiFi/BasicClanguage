    #include <stdio.h>
    #include <math.h>
    //一个数，如果它分解后的素因子最多只有2、3、5、7四种
    //这个数则称为“丑数”
    /*输入数据的第一行首先是一个整数C，表示测试数据的个数
    然后是C组数据，每组测试数据包含一个整数n(1 <= n <= 2^31-1)
    对于每组测试数据，如果n是丑数，则请输出“ Yes”,否则，请输出“No”*/
    int judge(int n)
    {
        int k=n;
        while(k!=1)
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
            k = n;
        }
      return 1;
    }
    int main()
    {
        int n,i,x;
        scanf("%d",&n); //获取测试个数
        for(i=1;i<=n;i++)
        {
            scanf("%d",&x); //获取测试数据
            if(judge(x))
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        return 0;
    }
