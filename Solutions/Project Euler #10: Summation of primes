#include <bits/stdc++.h>
using namespace std;

const int mx = 1000000;
bool sieve[mx + 5];
vector <int> primes = {2};
vector <long long> sum = {2};

void pre(void) {
    for(int i = 4; i <= mx; i += 2) sieve[i] = 1;
    for(int i = 3; i * i <= mx; i += 2)
        for(int j = i * i; j <= mx; j += i + i)
            sieve[j] = 1;
    for(int i = 3; i <= mx; i += 2)
        if(!sieve[i]) {
            primes.push_back(i);
            sum.push_back(sum.back() + primes.back());
        }
}

int main(void) {
    pre();
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int pos = upper_bound(primes.begin(), primes.end(), n) - primes.begin();
        printf("%lld\n", sum[pos - 1]);
    }
}
