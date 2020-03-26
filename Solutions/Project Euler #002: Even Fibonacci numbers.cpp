#include <bits/stdc++.h>
using namespace std;

const long long mx = 40000000000000000;

int main(void) {
    vector <long long> fib = {2, 8};
    vector <long long> sum = {2, 10};
    while(fib.back() < mx) {
        fib.push_back(4 * fib[fib.size() - 1] + fib[fib.size() - 2]);
        sum.push_back(sum.back() + fib.back());
    }
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        int pos = lower_bound(fib.begin(), fib.end(), n) - fib.begin();
        printf("%lld\n", sum[pos - 1]);
    }
}
