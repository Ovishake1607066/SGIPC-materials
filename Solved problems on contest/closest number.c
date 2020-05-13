#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,x,ab,i,j,k,c,t;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        c=0;
        scanf("%lld%lld%lld",&a,&b,&x);
        ab=pow(a,b);
        if(b>0)
        {
            for(j=0;j<x;j++)
            {
                if((ab-j)%x==0)
                {
                    c=ab-j;
                    break;
                }
            }
        }
        printf("%lld\n",c);
    }
}
