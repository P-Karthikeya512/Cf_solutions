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
#define fori(i, n) for (int i = 0; i < n; i++)
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
    f(m);
    vector<vector<int>> v(n, vector<int>(m));
    fori(i, n)
    {
        fori(j, m) cin >> v[i][j];
    }
    int res = 0;
    fori(j, m)
    {
        vector<int> vec(n);
        fori(i, n)
        {
            vec[i] = v[i][j];
        }
        sort(vec);
        fori(i, n)
        {
            res += (1LL) * (i + i - n + 1) * vec[i];
        }
    }
    printl(res);
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