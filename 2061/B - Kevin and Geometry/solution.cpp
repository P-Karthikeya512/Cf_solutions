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
    int n, sta;
    get n;
    vi v(n);
    read(v);
    mii m;
    for (int i : v)
    {
        m[i]++;
    }
    int pairs = 0;
    vi ans;
    bool found = true;
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        if (it->second >= 4)
        {
            cout << it->first << " " << it->first << " " << it->first << " " << it->first;
            endl;
            return;
        }
        else if (it->second >= 2)
        {
            pairs++;
        }
    }
    if (pairs >= 2)
    {
        int x = 0;
        for (auto it = m.begin(); it != m.end(); ++it)
        {
            if (x == 2)
                break;
            if (it->second >= 2)
            {
                x++;
                ans.pb(it->first);
            }
        }
        cout << ans[0] << ' ' << ans[0] << " " << ans[1] << " " << ans[1];
        endl;
    }
    else if (pairs == 0)
    {
        cout << -1;
        endl;
        return;
    }
    else
    {
        for (auto it = m.begin(); it != m.end(); ++it)
        {
            if (it->second >= 2)
            {
                sta = it->first;
                v.erase(find(all(v), sta));
                v.erase(find(all(v), sta));
            }
        }
        sort(all(v));
        int x, y;
        for (int i = 0; i < v.size() - 1; i++)
        {
            int diff = abs(v[i] - v[i + 1]);
            if (((2) * sta) > abs(diff))
            {
                x = v[i];
                y = v[i + 1];
                found = true;
                break;
            }
            else
            {
                found = false;
            }
        }
        if (!found)
        {
            cout << -1;
            endl;
        }
        else
        {
            cout << sta << ' ' << sta << ' ' << x << ' ' << y;
            endl;
        }
        return;
    }
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