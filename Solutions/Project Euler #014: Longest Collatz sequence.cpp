#include <bits/stdc++.h>
using namespace std;

const int mx = 5e6;
int dp[mx + 5], res[mx + 5];

int chainLen(long long n) {
  if (n == 1) return 0;
  if (n <= mx) {
    if (dp[n]) return dp[n];
  }
  int ret =  1 + ((n & 1) ? chainLen(3 * n + 1) : chainLen(n / 2));
  return (n <= mx) ? dp[n] = ret : ret;
}

void pre(void) {
  int maxl = -1, maxn = 1;
  for (int i = 1; i <= mx; ++i) {
    if (!dp[i]) dp[i] = chainLen(i);
    if (dp[i] >= maxl) {
      maxl = dp[i];
      maxn = i;
    }
    res[i] = maxn;
  }
}

int main(void) {
  pre();
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    printf("%d\n", res[n]);
  }
}
