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
    f(k);
    vin(n);
    vector<int> presum(n);
    presum[0] = v[0];
    for (int i = 1; i < n; i++)
        presum[i] = (presum[i - 1] + v[i]);
    vector<int> premax(n);
    premax[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        premax[i] = max(premax[i - 1], v[i]);
    }
    while (k--)
    {
        f(x);
        int lo = 0, hi = n - 1, ans = -1;
        while (lo <= hi)
        {
            int mid = lo + ((hi - lo) / 2);
            if (premax[mid] <= x)
            {
                lo = mid + 1;
                ans = mid;
            }
            else
                hi = mid - 1;
        }
        if (ans < 0)
            cout << 0 << ' ';
        else
            cout << presum[ans] << " ";
    }
    cout << '
';
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