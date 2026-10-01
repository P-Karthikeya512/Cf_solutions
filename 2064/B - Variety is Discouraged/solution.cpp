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
    map<int, int> m;
    for (auto i : v)
        m[i]++;
    string s = "";
    for (int i = 0; i < n; i++)
    {
        if (m[v[i]] == 1)
            s += '0';
        else
            s += '1';
    }
    int l = 0, r = 0, bestl = -1, bestr = -1, max_k = 0;
    while (r < n)
    {
        if (s[l] == '1')
        {
            l++;
            r++;
        }
        else
        {
            int sta = l;
            while (r < n && s[r] == '0')
                r++;
            int k = r - sta + 1;
            if (k > max_k)
            {
                max_k = k;
                bestl = sta + 1;
                bestr = r;
            }
            l++;
        }
    }
    if (bestr == -1)
    {
        cout << 0;
        endl;
    }
    else
    {
        cout << bestl << ' ' << bestr;
        endl;
    }
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