#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int long long
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
    int n, there = 0;
    get n;
    vi v(n), ind;
    read(v);
    for (int i = 0; i < n; i++)
    {
        ll b = v[i];
        while (b)
        {
            if (b % 2==0)
                there++;
            else
                break;
            b /= 2;
        }
    }
    if (there >= n)
    {
        cout << 0;
        endl;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        int avail = 0;
        int temp = i;
        while (temp)
        {
            if (temp % 2 == 0)
                avail++;
            else
                break;
            temp /= 2;
        }
        ind.push_back(avail);
    }
    sort(all(ind));
    reverse(all(ind));
    rep(i, 0, ind.size())
    {
        if (there + ind[i] >= n)
        {
            cout << i + 1;
            endl;
            return;
        }
        else
        {
            there += ind[i];
        }
    }
    cout << -1;
    endl;
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