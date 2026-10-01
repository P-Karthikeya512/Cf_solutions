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
#define vecin(v, n) for(int i=0;i<n;i++) cin >> v[i];
#define int long long
 
void je720(){
    int n;
    cin >> n;
    vi v(n);
    vecin(v, n);
    int maxm = 0;
    rep(i, 0, n){
        rep(j, 0, n){
            if(i == j) continue;
            int curr = v[i] ^ v[j];
            if(maxm <= curr) maxm = curr;
        }
    }
    cout << maxm << endl;
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