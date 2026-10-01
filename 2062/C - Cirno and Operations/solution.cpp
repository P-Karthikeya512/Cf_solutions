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
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
 
    if (n == 1)
    {
        cout << v[0] << "
";
        return;
    }
    int sum = accumulate(all(v), 0LL);
    vi temp = v;
    rep(i, 0, n - 1)
    {
        if (temp[0] > temp.back())
        {
            reverse(all(temp));
        }
        vi dif;
        rep(i, 0, temp.size() - 1)
        {
            dif.pb(temp[i + 1] - temp[i]);
        }
        temp = dif;
        int s = accumulate(all(temp), 0LL);
        sum = max(s, sum);
    }
 
    cout << sum << "
";
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