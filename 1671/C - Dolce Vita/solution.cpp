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
    int n, x;
    get n;
    get x;
    vi v(n);
    read(v);
    sort(all(v));
    vi pre(n);
    pre[0] = v[0];
    rep(i, 1, n) pre[i] = v[i] + pre[i - 1];
    int sum = 0;
    if (x < v[0])
    {
        cout << sum;
        endl;
        return;
    }
    rep(i, 0, n)
    {
        if ((x - pre[i]) < 0)
        {
            sum += 0;
        }
        else
        {
            int diff = (x + 1) - pre[i];
            int mod = (diff + i) / (i + 1);
            sum += mod;
        }
    }
    cout << sum;
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