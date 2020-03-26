#include <bits/stdc++.h>
using namespace std;

const int mx = 40;
vector <int> primes;
bool sieve[mx + 5];

void pre(void) {
    for(int i = 4; i <= mx; i += 2) sieve[i] = 1;
    for(int i = 3; i * i <= mx; i += 2) {
        if(!sieve[i]) {
            for(int j = i * i; j <= mx; j += i + i) {
                sieve[j] = 1;
            }
        }
    }
    for(int i = 2; i <= mx; ++i) {
        if(!sieve[i]) {
            primes.push_back(i);
        }
    }
}

int solve(int n) {
    int ret = 1;
    for(int i : primes) {
        if(i > n) break;
        int maxP = 1;
        while(maxP * i <= n) {
            maxP *= i;
        }
        ret *= maxP;
    }
    return ret;
}

int main(void) {
    pre();
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", solve(n));
    }
}
