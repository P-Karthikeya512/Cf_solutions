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
 
bool alln(vector<int> v)
{
    fori(v.size())
    {
        if (v[i] > 0)
            return false;
    }
    return true;
}
 
void solve()
{
    f(n);
    vin;
    int c1 = 0, c2 = 0;
    fori(n)
    {
        c1 += v[i];
        c2 = max(c2 + v[i], abs(c2 + v[i]));
        if (abs(c1) > c2)
        {
            c2 = abs(c1);
        }
    }
    printl(c2);
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