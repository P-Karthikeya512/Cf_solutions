#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int long long
#define vi vector<int>
#define all(v) (v).begin(), (v).end()
#define pii pair<int, int>
#define vpii vector<pii>
#define mii map<int, int>
#define str string
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
    str s;
    get s;
    vi v;
    for (char a : s)
    {
        int x = a - '0';
        v.pb(x);
    }
    int sum = accumulate(all(v), 0LL);
    if (sum % 9 == 0)
    {
        cout << "YES
";
        return;
    }
    int c_2 = count(all(v), 2);
    int c_3 = count(all(v), 3), rem = sum % 9;
    for (int i = 0; i < min(10LL, c_2 + 1); i++)
    {
        rep(j, 0, min(10LL, c_3 + 1))
        {
            if ((rem + (2 * i) + (6 * j)) % 9 == 0)
            {
                cout << "YES
";
                return;
            }
        }
    }
    cout << "NO
";
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