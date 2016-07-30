#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007;
long long int a,b,c,d;

void fast_fib(long long int n,long long int ans[])
{
	//printf("n=%lld\n",n );
    if(n == 0)
    {
        ans[0] = 0;
        ans[1] = 1;
        return;
    }
    fast_fib((n/2),ans);
    a = ans[0];             /* F(n) */
    b = ans[1];             /* F(n+1) */
    c = 2*b - a;
    //printf("a1=%lld\t b1=%lld \t c1=%lld\n",a,b,c );
    if(c < 0)
        c += MOD;
    c = (a * c) % MOD;      /* F(2n) */
    d = (a*a + b*b) % MOD;  /* F(2n + 1) */
    //printf("cl=%lld \t dl=%lld\n",c,d );
    if(n%2 == 0)
    {
        ans[0] = c;
        ans[1] = d;
        //printf("n=%lldcamel =%lld \t damel =%lld\n",n,ans[0],ans[1]);
    }
    else
    {
        ans[0] = d;
        ans[1] = c+d;
        // printf("n=%lld daamel =%lld \t c+damel =%lld\n",n,ans[0],ans[1]);
    }
}

int main()
{
    long long int n;        /* nth value to be found */
    scanf("%lld",&n);
    long long int ans[2]={0};
    fast_fib(n,ans);
    printf("%lld\n", ans[0]);
    return 0;
}
/*This code has a complexity of O(log n)*/
