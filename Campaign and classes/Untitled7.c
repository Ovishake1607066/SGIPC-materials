#include<stdio.h>
int main()
{
    long long int t,n,i,j,s,c;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        if(n==0)
        {
            printf("0\n");
        }
        else if(n==1)
        {
            printf("1\n");
        }
        else
        {
            s=0;
            c=-1;
            for(j=1;j<=n;j++)
            {
                if(s<=n)
                {
                    s=s+j;
                    c=c+1;
                }
                else
                {
                break;
                }
            }
            printf("%lld\n",c);
        }
    }

}
