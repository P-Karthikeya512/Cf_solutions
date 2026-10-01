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
 
bool chk(int m, vi v, int k){
int n = v.size();
vi pre(n);pre[0] = v[0];
rep(i,1,n) pre[i] = pre[i-1] + v[i];
rep(i,1,n){
double per = v[i]/double(pre[i-1]+m);
if(per > (k/double(100))) return false;
}
return true;
}
 
void solve()
{
int n,k,ans;
cin >> n >> k;
vi v(n);read(v);
int l = 0, r = 1e18;
while(l<=r){
int mid = l+(r-l)/2;
if(chk(mid,v,k)){
ans = l;
r = mid - 1;
}
else l = mid + 1;
}
cout << r+1 << endl;
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