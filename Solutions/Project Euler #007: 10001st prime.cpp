#include <bits/stdc++.h>
using namespace std;

const int mx = 123456;
bool sieve[mx + 5];
vector <int> primes;

void pre(void) {
    for(int i = 4; i <= mx; i += 2) sieve[i] = 1;
    for(int i = 3; i * i <= mx; i += 2)
        for(int j = i * i; j <= mx; j += i + i)
            sieve[j] = 1;
    for(int i = 2; i <= mx; ++i)
        if(!sieve[i]) primes.push_back(i);
}

int main(void) {
    pre();
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", primes[n - 1]);
    }
}
