#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        char str[n + 1];
        scanf("%s", str);
        int ans = 1;
        for(int i = 0; i < k; ++i) ans *= (str[i] - '0');
        for(int i = 1; i < n - k; ++i) {
            int temp = 1;
            for(int j = i; j - k < i; ++j) {
                temp *= (str[j] - '0');
            }
            ans = max(ans, temp);
        }
        printf("%d\n", ans);
    }
}
