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
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve()
{
    int n, m;
    get n;
    get m;
    vector<vi> v(n, vector<int>(m));
    rep(i, 0, n)
    {
        rep(j, 0, m) get v[i][j];
        sort(all(v[i]));
    }
    rep(i, 0, n)
    {
        rep(j, 0, m - 1)
        {
            if (abs(v[i][j] - v[i][j + 1]) < n)
            {
                cout << -1;
                endl;
                return;
            }
        }
    }
    int ans = -1;
    vi res;
    while (res.size() < n)
    {
        rep(i, 0, n)
        {
            if (ans + 1 == v[i][0])
            {
                ans++;
                res.pb(i + 1);
            }
        }
    }
    disp(res);
    endl;
    return;
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