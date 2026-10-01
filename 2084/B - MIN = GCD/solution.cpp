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
 
bool gcD(vi v, int x){
int gc = v[0];
rep(i,1,v.size()){
gc = gcd(gc,v[i]);
}
return gc == x;
}
 
void solve()
{
int n;get n;
vi v(n);read(v);
sort(all(v));
vi gc, mini;
mini.pb(v[0]);
rep(i,1,n){
if(v[i]%v[0]) mini.pb(v[i]);
else gc.pb(v[i]);
}
if(gc.empty()){
cout << "No
";
return;
}
if(gcD(gc,v[0])){cout << "Yes
";}
else cout << "No
";
return ;
}
 
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}