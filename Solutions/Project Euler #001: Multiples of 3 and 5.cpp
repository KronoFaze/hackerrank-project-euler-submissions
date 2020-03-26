#include <bits/stdc++.h>
using namespace std;

long long calc(int n, int m) {
    n = (n - 1) / m;
    return (1LL * m * n * (n + 1)) / 2;
}

int main(void) {
     int t;
     scanf("%d", &t);
     while(t--) {
         int n;
         scanf("%d", &n);
         long long ans = calc(n, 3) + calc(n, 5) - calc(n, 15);
         printf("%lld\n", ans);
     }
}
