#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define vi vector<int>
#define vvi vector<vector<int> >
#define all(v) (v).begin(), (v).end()
#define pii pair<int,int>
#define vpii vector<pii>
#define str string
#define pb push_back
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
 
int binpow(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            result *= base;
        base *= base;
        exp /= 2;
    }
    return result;
}
 
int binpowmo(int base, int exp, int mod) {
    int result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1)
            result = result * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}
 
int modinv(int a, int mod) {
    return binpowmo(a, mod - 2, mod); // mod must be prime
}
 
const int N = 1e7;
vector<bool> is_prime(N + 1, true);
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= N; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= N; j += i)
                is_prime[j] = false;
        }
    }
}
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
int dfs(int node, vector<vi> &g, vector<bool> &visited)
{
    if (visited[node]) return 0;
    visited[node] = true;
    int count = 1;
    for (int nei : g[node]) count += dfs(nei, g, visited);
    return count;
}
 
void solve()
{
int n;cin >> n;
vi v(n);read(v);
vector<vi> gr(n+1);
rep(i,0,n){
gr[v[i]].pb(i+1);
gr[i+1].pb(v[i]);
}
vector<bool>vis(n+1,0);
int sum = 0;
rep(i,0,n){
int cp = dfs(v[i],gr,vis);
sum += (cp-1)/2;
}
cout << sum << '
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