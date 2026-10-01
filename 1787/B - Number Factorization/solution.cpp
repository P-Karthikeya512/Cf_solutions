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
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve()
{
    int n;
    get n;
    vpii v;
    for(int i = 2; i * i <= n; i++) {
        int count = 0;
        if(n % i == 0) {
            while(n % i == 0) {
                n /= i;
                count++;
            }
            v.pb({i, count});
        }
    }
    if(n > 1) v.pb({n, 1});
    sort(all(v), [](pii a, pii b) {
        return a.second < b.second;
    });
    vi f,s;
rep(i,0,v.size()) f.pb(v[i].ff),s.pb(v[i].ss);
reverse(all(f));
rep(i,1,f.size()) f[i]*=f[i-1];
reverse(all(f));
vi dup(s.size());
dup[0]=s[0];
rep(i,1,s.size()) dup[i] = (s[i]-s[i-1]);
int sum=0;
rep(i,0,s.size()) sum+=(f[i]*dup[i]);
cout << sum << '
';
return;
}
 
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}