#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d=0,v,x;
    scanf("%d%d",&a,&b);
    c=a;
    while(1)
    {
        v=a+d;
        a=(a+d)/b;
        d=v%b;
        if(a)
        {
            c=c+a;
        }
        else
            break;
    }
    printf("%d\n",c);
    return 0;
}
