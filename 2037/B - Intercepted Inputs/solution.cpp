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
vi v(n);read(v);
map<int,int>m;
for(auto i:v) m[i]++;
for(int i=0;i<n;i++){
if((n-2)%v[i]==0 and m[((n-2)/v[i])]){
if(v[i]==(n-2)/v[i] and m[v[i]] > 1) cout << v[i] << ' ' << v[i] << ' ';
else if(v[i]==(n-2)/v[i] and m[v[i]] == 1) continue;
else cout << (n-2)/v[i] << ' ' << (v[i]) << ' ';
endl;
return;
}
}
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