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
    f(d);
    vector<int> v;
    v.push_back(1);
    if (d % 3 == 0 || n >= 3)
        v.push_back(3);
    if (d == 5)
        v.push_back(5);
    if (d == 7 || n >= 3)
        v.push_back(7);
    if (n >= 6 || d % 9 == 0 || (d % 3 == 0 && n >= 3))
        v.push_back(9);
    fori(v.size())
    {
        print(v[i]);
    }
    cout << endl;
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