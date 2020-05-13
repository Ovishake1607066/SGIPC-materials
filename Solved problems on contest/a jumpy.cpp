
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
using namespace std;
typedef long long ll;
const int maxn = 1e5 + 7;
int q[maxn],a[maxn],ans[maxn];

int main()
{
    int n;scanf("%d",&n);
    for(int i = 1;i <= n;i++)
    {
        scanf("%d",&a[i]);
    }

    int h = 0,l = 0;
    for(int i = 1;i <= n;i++)
    {
        while(l > h && a[q[l]] < a[i])
        {
            ans[q[l]] = i;
            l--;
        }
        q[++l] = i;
    }

    for(int i = 1;i <= n;i++)
    {
        if(ans[i] == 0)
            ans[i] = n + 1;
    }
    for(int i = 1;i <= n;i++)
    {
       // printf("%d ",min(a[i],ans[i] - i - 1));
    }
    for(ll i=1;i<=n;i++)
    {
        cout<<a[i]<<"  "<<q[i]<<"  "<<ans[i]<<endl;
    }
    return 0;
}
