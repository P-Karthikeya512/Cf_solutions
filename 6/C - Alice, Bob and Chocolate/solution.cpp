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
    int lo = 0, hi = n - 1, a = 0, b = 0, a_t = 0, b_t = 0;
    while (lo <= hi)
    {
        if (a_t <= b_t)
        {
            a_t += v[lo];
            a++;
            lo++;
                }
        else
        {
            b_t += v[hi];
            b++;
            hi--;
        }
    }
    cout << a << " " << b << endl;
}
 
int32_t main()
{
    fastio();
    solve();
    return 0;
}