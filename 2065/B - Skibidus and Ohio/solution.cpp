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
    str s;
    cin >> s;
    if (s.size() == 1)
    {
        cout << 1;
        endl;
        return;
    }
    else if (s.size() == 2)
    {
        if (s[0] == s[1])
        {
            cout << 1;
            endl;
        }
        else
        {
            cout << 2;
            endl;
        }
        return;
    }
    else
    {
        int count = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i - 1] == s[i])
            {
                count = 1;
                break;
            }
        }
        if (count)
        {
            cout << 1;
            endl;
            return;
        }
        else
        {
            cout << s.size();
            endl;
            return;
        }
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