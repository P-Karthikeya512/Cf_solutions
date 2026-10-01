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
#define endl cout << endl;
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
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve() {
  int n;get n;
  vi pos, neg, a;
  for (int i = 0; i < n; i++) {
    int x;get x;
    if (x > 0) pos.pb(x);
    else if (x < 0) neg.pb(x);
    else {
      if (a.size() < 2) a.pb(x);
    }
  }
  if (pos.size() > 2 || neg.size() > 2) {
    pn;
    return;
  }
  for (int i : pos) a.push_back(i);
  for (int i : neg) a.push_back(i);
  set<int> s(a.begin(), a.end());
  int size = a.size();
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      for (int k = j + 1; k < size; k++) {
        int sum = a[i] + a[j] + a[k];
        if (s.find(sum) == s.end()) {
          pn;
          return;
        }
      }
    }
  }
  py;
  return;
}
 
int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}