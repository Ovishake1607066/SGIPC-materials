#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<t;i++)
#define loop2 for(ll j=0;j<m;j++)
using namespace std;
int main()
{
    double x1,x2,x3,y1,y2,y3,a,b,c,d,e,f,g,h,k,ans;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
    {
        a=abs(x1-x2);
        b=abs(x1-x3);
        c=abs(x2-x3);
        d=abs(y1-y2);
        e=abs(y1-y3);
        f=abs(y2-y3);
        g=sqrt(a*a+d*d);
        h=sqrt(b*b+e*e);
        k=sqrt(c*c+f*f);
        if(g>=h && g>=k)
        {
            ans=g*3.141592653589793;
            printf("%.2lf\n",ans);
        }
        else if(h>=g && h>=k)
            {
                ans=h*3.141592653589793;
                printf("%.2lf\n",ans);
            }
        else
            {
                ans=k*3.141592653589793;
                printf("%.2lf\n",ans);
            }
    }
}
