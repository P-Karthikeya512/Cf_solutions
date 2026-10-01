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
    vin;
    sort(v);
    reverse(v.begin(), v.end());
    int ans = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        while (j < n && v[i] - v[j] <= 5)
        {
            j++;
            ans = max(ans, j - i);
        }
    }
    printl(ans);
    return;
}
 
int32_t main()
{
    fastio();
    // int t = 1;
    // cin >> t;
    // while (t--)
    solve();
    return 0;
}