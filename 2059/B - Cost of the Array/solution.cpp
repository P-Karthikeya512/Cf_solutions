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
    int n, k;
    get n;
    get k;
    vi v(n);
    read(v);
    vi b;
    if (n == k)
    {
        for (int i = 1; i < n; i += 2)
            b.pb(v[i]);
        rep(i, 0, b.size())
        {
            if (i + 1 != b[i])
            {
                cout << i + 1;
                endl;
                return;
            }
        }
        cout << b.size() + 1;
        endl;
        return;
    }
    else
    {
        for (int i = 1; i <= n - k + 1; i++)
            b.pb(v[i]);
        set<int> m(b.begin(), b.end());
        if (m.size() != 1 or (m.size() == 1 and b[0] != 1))
        {
            cout << 1;
            endl;
            return;
        }
        else
        {
            cout << 2;
            endl;
            return;
        }
    }
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