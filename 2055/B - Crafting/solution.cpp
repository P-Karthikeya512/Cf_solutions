#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int long long
#define f(n) \
    int n;   \
    cin >> n;
#define vin                     \
    vector<int> v(n);           \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define sort(v) sort(v.begin(), v.end())
#define print(n) cout << n << ' '
#define printl(n) cout << n << endl
#define fori(n) for (int i = 0; i < n; i++)
#define ford(n) for (int i = n - 1; i >= 0; i--)
#define count(a) count(v.begin(), v.end(), a)
#define counts(a) count(v.begin(), v.end(), 'a')
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve()
{
    f(n);
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int ne = 0, po = 1e9, nn = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] - b[i] < 0)
        {
            ne = min(ne, (a[i] - b[i]));
            nn++;
        }
        else
            po = min(po, (a[i] - b[i]));
    }
    if (po + ne >= 0 && nn <= 1)
        cout << "YES
";
    else
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