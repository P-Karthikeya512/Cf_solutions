#include <bits/stdc++.h>
using namespace std;
 
#define f(n) \
    int n;   \
    cin >> n;
#define vin                     \
    vector<int> v(n);           \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define sor(v) sort(v.begin(), v.end())
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
    f(m);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    map<int, int> ma;
    for (int i = 0; i < n; i++)
        ma[v[i]]++;
    vector<pair<int, int>> vec(ma.begin(), ma.end());
    sort(vec.begin(), vec.end(), [](const pair<int, int> a, const pair<int, int> b)
         { return a.second < b.second; });
    int x = vec.size(), count = 0, ans = 0;
    for (int i = 0; i < x; i++)
    {
        int k = vec[i].second;
        if (count + k <= m)
        {
            count += k;
            vec[i].second -= k;
            vec[x - 1].second += k;
        }
    }
    for (int i = 0; i < x; i++)
    {
        if (vec[i].second == 0)
            ans++;
    }
    printl(x - ans);
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