#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main(void) {
  int t;
	scanf("%d", &t);
	while (t--) {
		int n, m;
		scanf("%d %d", &n, &m);
		long long dp[n + 5][m + 5];
		for (int i = 0; i <= n; ++i) {
			for (int j = 0; j <= m; ++j) {
				if (i == 0 || j == 0) dp[i][j] = 1;
				else dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
			}
		}
		printf("%lld\n", dp[n][m]);
	}
}
