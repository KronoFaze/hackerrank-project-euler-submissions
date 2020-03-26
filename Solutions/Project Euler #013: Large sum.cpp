#include <bits/stdc++.h>
using namespace std;

string bigIntSum(string &sa, string &sb) {
  string ret;
  int la = sa.length() - 1, lb = sb.length() - 1, sum = 0, carry = 0;
  for (int i = la, j = lb; i >= 0 || j >= 0; --i, --j) {
    int da = (i >= 0) ? (sa[i] - '0') : 0;
    int db = (j >= 0) ? (sb[j] - '0') : 0;
    sum = (da + db + carry) % 10;
    carry = (da + db + carry) / 10;
    ret.push_back(sum + '0');
  }
  if (carry) ret.push_back(carry + '0');
  reverse(ret.begin(), ret.end());
  return ret;
}


int main(void) {
  string s, ans = "0";
  int n;
  scanf("%d", &n);
  while (n--) {
    cin >> s;
    ans = bigIntSum(s, ans);
  }
  cout << ans.substr(0, 10) << endl;
}
