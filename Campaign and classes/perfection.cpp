#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,l,a,b;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(scanf("%d",&l)==1)
    {
        if(l==0)
        {
            cout<<"END OF OUTPUT"<<endl;
            break;
        }
        a=0;
        for(i=1;i<=(l/2);i++)
        {
            if(l%i==0)
            {
                a=a+i;
            }
        }
        if(a==l)
            printf("%5d  PERFECT",l);
        else if(a<l)
            printf("%5d  DEFICIENT",l);
        else
            printf("%5d  ABUNDANT",l);
            cout<<endl;
    }
    return 0;
}
