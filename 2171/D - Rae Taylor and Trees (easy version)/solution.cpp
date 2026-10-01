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
#define py cout << "Yes
";
#define pm cout << "-1
";
#define pn cout << "No
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
 
void je720(){
    int n;
    cin >> n;
    vi v(n), pre(n), suf(n);
    vecin(v, n);
    rep(i, 0, n){
        if(i == 0){
            pre[i] = v[i];
            continue;
        }
        pre[i] = min(pre[i-1], v[i]);
    }
    brep(i, n-1, 0){
        if(i == n-1){
            suf[i] = v[i];
            continue;
        }
        suf[i] = max(suf[i+1], v[i]);
    }
    rep(i, 1, n){
        if(pre[i-1] > suf[i]){pn;rt;}
    }
    py;
    rt;
}
 
signed main(){
    fastio();
    int t = 1;
    cin >> t;
    while (t--){
        je720();
    }
}