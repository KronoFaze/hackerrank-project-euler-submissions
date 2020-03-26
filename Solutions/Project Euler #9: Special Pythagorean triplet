#include <bits/stdc++.h>

using namespace std;

long long maximum(long long a, long long b)
{
    return a > b ? a : b;
}

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        if(n & 1)
        {
            printf("-1\n");
            continue;
        }
        int m = (n / 2) * n;
        long long result = 0;
        for(int i = 2; i * i <= m; i++)
        {
            if(m % i == 0)
            {
                int a = n - (m / i);
                int b = n - i;
                int c = n - (a + b);
                if(a * a + b * b == c * c) result = maximum(result, 1LL * a * b * c);
            }
        }
        if(result > 0) printf("%lld\n", result);
        else printf("-1\n");
    }
}
