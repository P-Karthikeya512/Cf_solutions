#include <bits/stdc++.h>
using namespace std;
 
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
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve()
{
    long long n;
    cin >> n;
    long long ans = 0;
    while (n > 0)
    {
        ans++;
        n /= 4;
    }
    long long res = 1ll << (ans - 1);
    printl(res);
}
 
int main()
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