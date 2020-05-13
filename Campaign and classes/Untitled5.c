#include<stdio.h>
int main()
{
    long long int a,b,c;
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if((a*a)==(b*b)+(c*c) || (b*b)==(a*a)+(c*c) || (c*c)==(a*a)+(b*b))
        {
            printf("Case %d: yes",i+1);
        }
        else
        {
            printf("Case %d: no",i+1);
        }
    }
}
