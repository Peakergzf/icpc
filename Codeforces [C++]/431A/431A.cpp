#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi a(5);
  for (int i=0; i<4; i++) cin >> a[i+1];
  string s; cin >> s;
  int ans=0;
  for (char c : s) ans+=a[c-'0'];
  cout << ans;

  return 0;
}
