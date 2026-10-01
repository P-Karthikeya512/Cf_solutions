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
int n,m;get n;get m;
vector<str>v(n);
for(int i=0;i<n;i++) cin >> v[i];
vector<vector<bool> >row(n,vector<bool>(m,true)),col(n,vector<bool>(m,true));
rep(i,0,n){
bool found = false;
rep(j,0,m){
if(v[i][j]=='0')found = true;
else{
if(found)row[i][j] = false;
}
}
}
rep(i,0,m){
bool found = false;
rep(j,0,n){
if(v[j][i]=='0') found = true;
else {
if(found) col[j][i]=false;
}
}
}
rep(i,0,n){
rep(j,0,m){
if(!row[i][j] and !col[i][j]){pn;return;}
}
}
py;
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