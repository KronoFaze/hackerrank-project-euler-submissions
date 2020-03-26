#include <bits/stdc++.h>
using namespace std;

vector <int> primes;
int res[2000];

int nod(int n) {
	int ret = 1;
	for (auto i : primes) {
		if (n == 1) break;
		int p = 0;
		while (n % i == 0) {
			n = n / i;
			++p;
		}
		ret *= (p + 1);
	}
	return ret;
}

void sieve(void) {
	int size = 1e6;
	bool mark[size];
	memset(mark, true, sizeof(mark));
	for (int i = 4; i < size; i += 2) mark[i] = false;
	for (int i = 3; i * i < size; i += 2) {
		for (int j = i * i; j < size; j += i + i) {
			mark[j] = false;
		}
	}
	primes.push_back(2);
	for (int i = 3; i < size; i += 2) {
		if (mark[i]) primes.push_back(i);
	}
}

int main(void) {
	sieve();
	for (int i = 0, j = 1; i < INT_MAX - j; i += j, ++j) {
		int n = nod(i + j);
		if (!res[n]) res[n] = i + j;
	}
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, ans = INT_MAX;
		scanf("%d", &n);
		for (int i = n + 1; i < 1025; ++i) {
			if (res[i]) ans = min(ans, res[i]);
		}
		printf("%d\n", ans);
	}
}
