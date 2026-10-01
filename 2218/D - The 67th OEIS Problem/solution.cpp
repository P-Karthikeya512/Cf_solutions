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
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define brep(i,a,b) for(int i=(a);i>=(b);i--)
#define disp(a) { for(auto x : a) cout << x << " "; cout << "
"; }
#define out(a) { for(auto x : a) cout << x << " "; cout << "
"; }
#define all(v) (v).begin(),(v).end()
#define rll(v) (v).rbegin(),(v).rend()
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
#define vecin(v, n) for(int i=0;i<n;i++) cin >> v[i];
#define int long long
 
int maxN = 120000;
vector<bool>isp(maxN, true);
vector<int>primes;
 
void prime_gen(){
    isp[0] = isp[1] = false;
    for(int i=2;i*i*1ll<maxN;i++){
        if(isp[i]){
            for(int j=i*i;j<maxN;j+=i) isp[j] = false;
        }
    }
    for(int i=0;i<maxN;i++) if(isp[i]) primes.pb(i);
}
 
void je720(){
    int n;
    cin >> n;
    vector<int> ans(n);
    for(int i=0;i<n;i++) ans[i] = primes[i]*primes[i+1];
    disp(ans);
    rt;
}
 
signed main(){
    fastio();
    int t;
    prime_gen();
    cin >> t;
    while (t--){
        je720();
    }
}