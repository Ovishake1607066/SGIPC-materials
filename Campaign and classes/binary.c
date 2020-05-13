#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,n,lo,hi,mi,i,j,x;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        lo=0;
        hi=100000000000;
        scanf("%lld",&n);
        while(lo<=hi)
        {
            mi=lo+(hi-lo)/2;
            x=(sqrt(1+8*n)-1)/2;
            if(x==mi)
            {
                printf("%lld\n",mi);
                break;
            }
            else if(x<mi)
            {
                hi=mi-1;
            }
            else
            {
                lo=mi+1;
            }

        }
    }
    return 0;
}
