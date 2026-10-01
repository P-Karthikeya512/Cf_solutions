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
vi sq(n+1,0);
rep(i,1,n+2){
int p = (i*(i+1))/2;
int sqr = sqrt(p);
if(sqr*sqr == p) sq[i-1] = 1;
}
int x = (n*(n+1))/2;
int y = sqrt(x);
if(y*y == x){
cout << -1 << '
';
return;
}
// disp(sq);
// cout << '
';
auto it = find(sq.begin(),sq.end(),n);
vi ans(n);
rep(i,1,n+1) ans[i-1] = i;
// swap(ans[0], ans[1]);
rep(i,0,n-1){
if(sq[i]==1) swap(ans[i],ans[i+1]);
}
disp(ans);
cout << '
';
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