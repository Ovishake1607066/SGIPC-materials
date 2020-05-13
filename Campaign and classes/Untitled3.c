#include<stdio.h>
int main()
{
    long long int a,b,c;
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a<=0 || b<=0 ||c<=0)
        {
            printf("Case %d: no\n",i+1);
        }
        else if(a>b && a>c)
        {
            if(a*a==b*b+c*c)

            {
                printf("Case %d: yes\n",i+1);
            }
            else
            {
                printf("Case %d: no\n",i+1);
            }
        }
        else if(b>a && b>c)
        {
            if(b*b==a*a+c*c)
            {
                printf("Case %d: yes\n",i+1);
            }
            else
            {
                printf("Case %d: no\n",i+1);
            }
        }
        else
        {
            if(c*c==b*b+a*a)
            {
                printf("Case %d: yes\n",i+1);
            }
            else
            {
                printf("Case %d: no\n",i+1);
            }
        }
    }
    return 0;
}
