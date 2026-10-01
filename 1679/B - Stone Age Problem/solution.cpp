#include <bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define all(v) (v).begin(), (v).end()
#define pii pair<int, int>
#define vpii vector<pii>
#define mii map<int, int>
#define string str
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
    int q;
    get n;
    get q;
    vi v(n);
    read(v);
    long long sum = accumulate(all(v), 0LL);
    vi lastFquery(n, -1);
    vi lastFqvalue(n);
    for (int i = 0; i < n; i++)
    {
        lastFqvalue[i] = v[i];
    }
    int lastSquery = -1, lastSqvalue = 0;
    for (int j = 0; j < q; j++)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int i, x;
            get i;
            get x;
            i--;
            int cur_val;
            if (lastSquery > lastFquery[i])
            {
                cur_val = lastSqvalue;
            }
            else
            {
                cur_val = lastFqvalue[i];
            }
            sum += x - cur_val;
            lastFquery[i] = j;
            lastFqvalue[i] = x;
        }
        else
        {
            int x;
            cin >> x;
            lastSquery = j;
            lastSqvalue = x;
            sum = (long long)n * x;
        }
        cout << sum;
        endl;
    }
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