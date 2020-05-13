#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,x,y;
    cin>>n;
    if(n%2==0)
    {
        a=n/2;
        cout<<a*n<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i%2==0) && (j%2==0))
                   cout<<"C";
                else if((i%2)!=0 && (j%2)!=0)
                    cout<<"C";
                else
                    cout<<".";
            }
            cout<<endl;
        }
    }
    else
    {
        a=n/2;
        b=a*a;
        x=(a+1)*(a+1);
        cout<<b+x<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i%2==0) && (j%2==0))
                   cout<<"C";
                else if((i%2)!=0 && (j%2)!=0)
                    cout<<"C";
                else
                    cout<<".";
            }
            cout<<endl;
        }
    }
}
