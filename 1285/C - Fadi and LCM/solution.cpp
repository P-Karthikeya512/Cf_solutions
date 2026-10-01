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
int n;get n;
vpii v;
for(int i=1;i*i<=n;i++){
if(n%i==0){
v.pb({i,n/i});
}
}
int ans = -1,mini = 1e15;
rep(i,0,v.size()){
if(gcd(v[i].ff,v[i].ss)==1){
mini = min(mini,max(v[i].ff,v[i].ss));
}
}
rep(i,0,v.size()){
if(mini==v[i].ff || mini==v[i].ss){
cout << v[i].ff << " " << v[i].ss << '
';
br;
}
}
return ;
}
 
int32_t main()
{
    fastio();
    int t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}