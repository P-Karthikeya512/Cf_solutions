#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int long long
#define vi vector<int>
#define all(v) (v).begin(), (v).end()
#define pii pair<int,int>
#define vpii vector<pii>
#define str string
#define pb push_back
#define ff first
#define ss second
#define get cin >>
#define py cout << "YES
"
#define pn cout << "NO
"
#define pm cout << -1 << endl;
#define rep(i,x,y) for(int i=x;i<y;i++)
#define rrep(i,x,y) for(int i=x;i>=y;i--)
#define ct continue
#define br break
#define disp(a) \
  { \
    for (int i = 0; i < a.size(); i++) \
      cout << a[i] << " "; \
  }
#define read(arr) \
  { \
    int n = arr.size(); \
    for (int i = 0; i < n; i++) \
      cin >> arr[i]; \
  }
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve()
{
  int n; get n;
  vi v(n); read(v);
  vi fixed = {0, 1, 0, 3, 2, 0, 2, 5};
  if (n < fixed.size()) { cout << 0 << '
'; return; }
  map<int, int> m, x;
  for (int i : fixed) m[i]++;
  for (int i = 0; i < n; i++) {
    x[v[i]]++;
    bool match = true;
    for (auto& p : m) {
      if (x[p.first] < p.second) {
        match = false;
        break;
      }
    }
    if (match) { cout << i + 1 << '
'; return; }
  }
  cout << 0 << '
';
}
 
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}