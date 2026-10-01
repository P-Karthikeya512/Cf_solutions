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
 
int pow(int a)
{
    while (a % 2 == 0)
    {
        a /= 2;
    }
    return a;
}
 
void solve()
{
    f(a);
    f(b);
    if (a > b)
        swap(a, b);
    if (pow(a) != pow(b))
    {
        printl(-1);
        return;
    }
    int ans = 0;
    b /= a;
    while (b >= 8)
    {
        b /= 8;
        ++ans;
    }
    if (b > 1)
        ans++;
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