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
    f(m);
    vector<int> a(n), b(m);
    fori(n) cin >> a[i];
    fori(m) cin >> b[i];
    sort(a);
    sort(b);
    int l1 = 0, l2 = 0, r1 = n - 1, r2 = m - 1, ans = 0;
    while (l1 <= r1)
    {
        if (abs(b[r2] - a[l1]) > abs(a[r1] - b[l2]))
        {
            ans += abs(b[r2] - a[l1]);
            l1++;
            r2--;
        }
        else
        {
            ans += abs(b[l2] - a[r1]);
            l2++;
            r1--;
        }
    }
    printl(ans);
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