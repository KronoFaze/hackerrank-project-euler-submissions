#include <bits/stdc++.h>
using namespace std;

long long solve(long long n) {
    while(n % 2 == 0) n /= 2;
    if(n == 1) return 2;
    long long m = 1, sqrtn = sqrtl(n);
    while(n > m && m <= sqrtn) {
        m += 2;
        while(n % m == 0) n /= m;
    }
    return max(n, m);
}

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        printf("%lld\n", solve(n));
    }
}
