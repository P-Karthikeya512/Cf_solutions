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
 
bool tprimes(int x)
{
    vi factors;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            factors.pb(i);
            int y = x / i;
            if (i != y)
                factors.pb(y);
        }
    }
    return factors.size() == 2;
}
 
void solve()
{
    int n;
    get n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        int root = sqrt(v[i]);
        if (root * root == v[i] && tprimes(root)) py 
        else pn
    }
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