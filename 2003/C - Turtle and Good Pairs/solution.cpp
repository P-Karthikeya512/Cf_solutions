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
str s;get s;
map<char,int>m;
for(auto ch : s) m[ch]++;
vector<pair<int,char>> c;
for(auto freq : m) c.pb({freq.ss,freq.ff});
sort(all(c),[](pair<int,char> a, pair<int,char> b){return (a.first> b.first) || (a.ff == b.ff and a.ss > b.ss);});
vector<char>ans(n,'@');
int id = 0;
rep(i,0,c.size()){
int freq = c[i].ff;
char ch = c[i].ss;
while(freq--){
if(id>=n) id = 1;
ans[id] = ch;
id+=2;
}
}
rep(i,0,n) cout << ans[i];
endl;
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