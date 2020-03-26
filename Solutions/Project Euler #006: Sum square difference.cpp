#include <bits/stdc++.h>
using namespace std;

long long sumOfSq(int n) {
    return (1LL * n * (n + 1) * (2 * n + 1)) / 6;
}

long long sqOfSum(int n) {
    return 1LL * n * (n + 1) / 2;
}

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        printf("%lld\n", sqOfSum(n) * sqOfSum(n) - sumOfSq(n));
    }
}
