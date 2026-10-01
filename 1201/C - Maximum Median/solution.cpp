#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int long long
#define vi vector<int>
#define all(v) (v).begin(), (v).end()
#define pii pair<int, int>
#define vpii vector<pii>
#define mii map<int, int>
#define string str
#define pb push_back
#define ff first
#define ss second
#define get cin >>
#define py cout << "YES
";
#define pn cout << "NO
";
#define pm cout << -1 << endl;
#define endl cout << endl;
#define rep(i, x, y) for (int i = x; i < y; i++)
#define rrep(i, x, y) for (int i = x; i >= y; i--)
#define ct continue
#define br break
#define disp(a)                            \
    {                                      \
        for (int i = 0; i < a.size(); i++) \
            cout << a[i] << " ";           \
    }
#define read(arr)                   \
    {                               \
        int n = arr.size();         \
        for (int i = 0; i < n; i++) \
            cin >> arr[i];          \
    }
 
int n, k;
vi v;
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
bool check(int x)
{
    int op = 0;
    for (int i = (n - 1) / 2; i < n; i++)
    {
        op += max(0ll, x - v[i]);
    }
    return op <= k;
}
 
void solve()
{
 
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.pb(t);
    }
    sort(all(v));
    int lo = 0, hi = 2e9;
    for (int a = hi; a >= 1; a /= 2)
    {
        while (check(lo + a))
            lo += a;
    }
    cout << lo;
    endl;
    return;
}
 
int32_t main()
{
    fastio();
    solve();
    return 0;
}