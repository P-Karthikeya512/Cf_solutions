#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
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
 
const int num = 1e5+10000;
vector<bool> prime(num+1, true);
vi primes;
 
void sieve()
{
    prime[0] = prime[1] = false;
    for(int i = 2; i * i <= num; i++){
        if(prime[i]){
            for(int j = i * i; j <= num; j += i)
                prime[j] = false;
        }
    }
    for(int i = 2; i <= num; i++){
        if(prime[i]) primes.pb(i);
    }
}
 
bool isprime(int x){
vi fact;
for(int i=1;i*i<=x;i++){
if(x%i==0){
fact.pb(i);
if(i!=(x/i)) fact.pb(x/i);
}
}
return fact.size()==2;
}
 
void solve()
{
    int n, m;
    get n; get m;
    vector<vi> v(n, vi(m));
    rep(i, 0, n){
        rep(j, 0, m) get v[i][j];
    }
    int rans = 1e9;
    rep(i, 0, m){
        int rcount = 0;
        rep(j, 0, n){
            if(isprime(v[j][i])) rcount+=0;
            int x = *lower_bound(all(primes), v[j][i]);
            rcount += (x - v[j][i]);
        }
        rans = min(rans, rcount);
    }
    int cans = 1e9;
    rep(i, 0, n){
        int ccount = 0;
        rep(j, 0, m){
            if(isprime(v[i][j])) ccount+=0;
            int x = *lower_bound(all(primes), v[i][j]);
            ccount += (x - v[i][j]);
        }
        cans = min(cans, ccount);
    }
    cout << min(cans, rans) << endl;
}
 
int32_t main()
{
    fastio();
    sieve();
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}