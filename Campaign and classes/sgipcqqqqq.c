#include<stdio.h>
int main()
{
    int t,a,b,i,j,c,d,e;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        if(a<=b)
        {
            c=(b*4);
            d=(c+19);
            printf("Case %d: %d\n",i+1,d);
        }
        else
        {
            j=(a-b);
            e=(j+a);
            c=(e*4);
            d=(c+19);
            printf("Case %d: %d\n",i+1,d);

        }

    }


    return 0;
}
