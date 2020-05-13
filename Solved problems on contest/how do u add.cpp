#include <bits/stdc++.h>
using namespace std;
int main() {
	long long C[101][101] = {0};
	long long int N, K;
	C[0][0]=0;
	for(N = 1; N <= 100; N++)
		{
		    C[1][N] = N;
		    C[N][1]=1;
		}
		for(N=2;N<=100;N++)
            for(K = 2; K <= 100; K++)
                C[N][K] = (C[N][K-1] + C[N-1][K])%1000000;
	while(scanf("%lld %lld", &N, &K) == 2) {
		if(N == 0 && K == 0)
			break;
		printf("%lld\n", C[N][K]);
	}
}
