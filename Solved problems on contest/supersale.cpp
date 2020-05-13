#include<bits/stdc++.h>
#define ll long long
using namespace std;
int profit[1010][1010],value[1010],weight[1010];
int main()
{
     int dw,n,t;
     cin>>t;
     while(t--)
     {
         cin>>n;
         for(int i=1;i<=n;i++)
         {
             cin>>value[i]>>weight[i];
         }
         int a,sum=0;
         cin>>a;
         for(ll i=0;i<1010;i++)
            for(ll j=0;j<1010;j++)
                profit[i][j]=0;
         for(int i=0;i<a;i++)
         {
             cin>>dw;
             for(int i=1;i<=n;i++)
             {
                for(int w=1;w<=dw;w++)
                {
                    if(weight[i]>w)
                    {
                        profit[i][w] = profit[i-1][w];
                        }
                    else
                    {
                            profit[i][w] = max(profit[i-1][w-weight[i]]+value[i],profit[i-1][w]);
                    }
                 }
              }
              sum+=profit[n][dw];
         }
         printf("%d\n",sum);
     }
}
