#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int ar[20][20];
    for (int i = 0; i < 20; ++i) {
        for (int j = 0; j < 20; ++j) {
            scanf("%d", &ar[i][j]);
        }
    }
    int ans = 0;
    for (int i = 0; i < 20; ++i) {
        for (int j = 0; j < 20; ++j) {
            if (i >= 3) ans = max(ans, ar[i][j] * ar[i - 1][j] * ar[i - 2][j] * ar[i - 3][j]);
            if (j <= 16) ans = max(ans, ar[i][j] * ar[i][j + 1] * ar[i][j + 2] * ar[i][j + 3]);
            if (i <= 16 && j <= 16) ans = max(ans, ar[i][j] * ar[i + 1][j + 1] * ar[i + 2][j + 2] * ar[i + 3][j + 3]);
            if (i <=16 && j >= 3) ans = max(ans, ar[i][j] * ar[i + 1][j - 1] * ar[i + 2][j - 2] * ar[i + 3][j - 3]);
        }
    }
    printf("%d\n", ans);
}
