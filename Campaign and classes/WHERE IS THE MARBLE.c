#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,i,j,k,b,c,d;
    k=1;
    while(scanf("%d%d",&n,&q)==2 &&n!=0 &&q!=0)
    {
        d=0;
        int a[n],a2[q];
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=1;j<=q;j++)
        {
            scanf("%d",&a2[j]);
        }
        sort(a,a+n);
        printf("CASE# %d:\n",k);
        for(j=1;j<=q;j++)
        {
            c=0;
            for(i=1;i<=n;i++)
            {
                if(a[i]==a2[j])
                {
                    d=1;
                    c=i;
                    break;
                }
            }
            if(d==1)
            {
                printf("%d found at %d\n",a2[j],c+1);
            }
            else if(d==0)
            {
               printf("%d not found\n",a2[j]);
            }
        }
        k++;
    }
    return 0;
}
