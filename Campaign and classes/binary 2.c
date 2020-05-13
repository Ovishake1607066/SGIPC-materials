#include<stdio.h>
int main()
{
    int n,a,m,b,q,i,j,p,ara[1000000],k,low,high,mid;
    scanf("%d",&n);
    q=0;
    for(i=0,j=0;i<n;i++,j++)
    {
        scanf("%d",&a);
        p=q+1;
        q=q+a;
        ara[i]=p;
        ara[j]=q;
    }
    scanf("%d",&m);
    low=ara[0];
    high=ara[n*2];
    for(k=0;k<m;k++)
    {
        scanf("%d",&b);
        while(low<=high)
        {
            mid=low+(high-low)/2;
        }

    }
}
