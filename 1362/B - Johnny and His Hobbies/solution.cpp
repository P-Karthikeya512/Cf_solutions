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
 
bool check(vector<int> v, int j)
{
    vector<int> x;
    fori(v.size())
    {
        x.push_back(v[i] ^ j);
    }
    sort(v);
    sort(x);
    return x == v;
}
 
void solve()
{
    f(n);
    vin;
    int j = 1;
    while (j < 1024)
    {
        if (check(v, j))
        {
            printl(j);
            break;
        }
        j++;
    }
    if (j == 1024)
        printl(-1);
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