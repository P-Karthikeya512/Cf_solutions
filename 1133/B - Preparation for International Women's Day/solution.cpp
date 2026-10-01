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
    vector<int> m(k);
    rep(i, 0, n) v[i] = v[i] % k;
    for (auto i : v)
        m[i]++;
    // disp(m);
    // endl;
    int sum = (m[0] / 2) * 2;
    if (k % 2 == 0)
    {
        sum += (m[k / 2] / 2) * 2;
    }
    for (int i = 1; i < (k + 1) / 2; i++)
    {
        int mini = min(m[i], m[k - i]);
        sum += (2 * mini);
    }
    cout << sum;
    endl;
    return;
}
 
int32_t main()
{
    fastio();
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}