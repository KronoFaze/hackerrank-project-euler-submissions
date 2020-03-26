#include <bits/stdc++.h>
using namespace std;

set <int> palindromes;

bool isPalindrome(int n) {
    int a = n, b = 0;
    while(a) {
        b *= 10;
        b += a % 10;
        a /= 10;
    }
    return b == n;
}

void pre(void) {
    for(int i = 100; i <= 999; ++i) {
        for(int j = 100; j <= 999; ++j) {
            if(isPalindrome(i * j))
                palindromes.insert(i * j);
        }
    }
}

int main(void) {
    pre();
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        n -= isPalindrome(n);
        auto it = lower_bound(palindromes.begin(), palindromes.end(), n);
        printf("%d\n", *(--it));
    }
}
