    #include <stdio.h>
    #include <math.h>
    //һ������������ֽ������������ֻ��2��3��5��7����
    //��������Ϊ��������
    /*�������ݵĵ�һ��������һ������C����ʾ�������ݵĸ���
    Ȼ����C�����ݣ�ÿ��������ݰ���һ������n(1 <= n <= 2^31-1)
    ����ÿ��������ݣ����n�ǳ�������������� Yes��,�����������No��*/
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
        scanf("%d",&n); //��ȡ���Ը���
        for(i=1;i<=n;i++)
        {
            scanf("%d",&x); //��ȡ��������
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
