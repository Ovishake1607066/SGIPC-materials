#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,c;
    c=1;
    for(i=2; ;i++)
    {
        if(i%2==0)
        {
            while(i%2==0)
            {
                i=i/2;
                if(i==1)
                {
                    c=c+1;
                    break;
                }

            }
        }
        if(i%3==0)
        {
            while(i%3==0)
            {
                i=i/3;
                if(i==1)
                {
                    c=c+1;
                    break;
                }
            }
        }
        if(i%5==0)
        {
            while(i%5==0)
            {
                i=i/5;
                if(i==1)
                {
                    c=c+1;
                    break;
                }
            }
        }
        if(c==1500)
        {
            printf("The 1500'th ugly number is %lld\n",i);
            break;
        }
    }
    return 0;
}
