#include <bits/stdc++.h>
using namespace std;
#define fastio() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); }
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
const long long mod = 1e9 + 7;
 
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define rt return;
#define py cout << "YES
";
#define pm cout << "-1
";
#define pn cout << "NO
";
#define ed cout << "
";
#define rep(i,a,b) for(int i=(a); i<(b); i++)
#define brep(i,a,b) for(int i=(a); i>=(b); i--)
#define disp(a) { for(auto x : a) cout << x << " "; cout << "
"; }
#define out(a) { for(auto x : a) cout << x << " "; cout << "
"; }
#define all(v) (v).begin(), (v).end()
#define rll(v) (v).rbegin(), (v).rend()
#define fsort(v) sort(all(v));
#define rsort(v) sort(rll(v));
#define minel(a) (*min_element(all(a)))
#define maxel(a) (*max_element(all(a)))
#define mini(a) (min_element(all(a)) - (a).begin())
#define maxi(a) (max_element(all(a)) - (a).begin())
#define lowb(a,x) (lower_bound(all(a),(x)) - (a).begin())
#define uppb(a,x) (upper_bound(all(a),(x)) - (a).begin())
#define uniq(v) v.erase(unique(all(v)),v.end());
#define rev(v) reverse(all(v));
#define YES(x) cout << ((x) ? "YES
" : "NO
")
#define vecin(v,n) for(int i=0;i<n;i++) cin >> v[i];
#define int long long
 
void solve(){
    int n;
    cin >> n;
    vll v(n);
    vecin(v, n);
    long long base = 0;
    rep(i, 1, n) base += llabs(v[i] - v[i-1]);
    long long bred = 0;
    bred = max({bred, llabs(v[1] - v[0]), llabs(v[n-1] - v[n-2])});
    rep(i, 1, n-1){
        long long red = llabs(v[i] - v[i-1]) + llabs(v[i+1] - v[i]) - llabs(v[i+1] - v[i-1]);
        if(red > bred) bred = red;
    }
    long long ans = base - bred;
    cout << ans << "
";
    rt;
}
 
signed main(){
    fastio();
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}