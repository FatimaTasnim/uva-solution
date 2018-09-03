#include <bits/stdc++.h>
using namespace std;

string NGtv(int n) {
  string r= "";
  int re;

  if (n == 0)
    return "0";

  while (n != 0) {
    re= n % -2;
    n /= -2;
    if (re < 0) {
      n += 1;
      re += 2;
    }
    r += (char)('0' + re);
  }

  return string(r.rbegin(), r.rend());
}

int main() {
  int r;
  int n;

  scanf("%d",&r);

  for (int i = 0; i < r; i++) {
    cout << "Case #" << i+1 << ": ";

    scanf("%d",&n);

    cout << NGtv(n) << endl;
  }
}
