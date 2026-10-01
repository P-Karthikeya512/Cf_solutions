#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int long long
#define vi vector<int>
#define all(v) (v).begin(), (v).end()
#define pii pair<int, int>
#define vpii vector<pii>
#define mii map<int, int>
#define str string
#define pb push_back
#define ff first
#define ss second
#define get cin >>
#define py cout << "YES
";
#define pn cout << "NO
";
#define pm cout << -1 << endl;
#define endl cout << endl;
#define rep(i, x, y) for (int i = x; i < y; i++)
#define rrep(i, x, y) for (int i = x; i >= y; i--)
#define ct continue
#define br break
#define disp(a)                            \
    {                                      \
        for (int i = 0; i < a.size(); i++) \
            cout << a[i] << " ";           \
    }
#define read(arr)                   \
    {                               \
        int n = arr.size();         \
        for (int i = 0; i < n; i++) \
            cin >> arr[i];          \
    }
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve()
{
    int n;
    get n;
    vi v(n);
    read(v);
    str s = "";
    while (v[0] > 1)
    {
        s += 'P';
        s += 'R';
        s += 'L';
        v[0]--;
    }
    if (v[0] == 1)
    {
        s += 'P';
        s += 'R';
    }
    if (v[0] == 0)
        s += 'R';
    rep(i, 1, n - 1)
    {
        while (v[i] > 1)
        {
            s += 'P';
            s += 'L';
            s += 'R';
            v[i]--;
        }
        if (v[i] == 1)
        {
            s += 'P';
            s += 'R';
        }
        else if (v[i] == 0)
            s += 'R';
    }
    while (v[n - 1] > 1)
    {
        s += 'P';
        s += 'L';
        s += 'R';
        v[n - 1]--;
    }
    if (v[n - 1] == 1)
    {
        s += 'P';
    }
    cout << s;
    endl;
    return;
}
 
int32_t main()
{
    fastio();
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}