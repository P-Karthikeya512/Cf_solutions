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
    vector<int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
        pre[i] = pre[i - 1] + v[i];
    f(q);
    vector<int> vq(q);
    fori(q) cin >> vq[i];
    fori(q)
    {
        int l = 0, r = n - 1, ans;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (pre[mid] >= vq[i])
            {
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        printl(l + 1);
    }
    return;
}
 
int32_t main()
{
    fastio();
    solve();
    return 0;
}