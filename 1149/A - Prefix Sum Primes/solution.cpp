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
    int n;
    get n;
    vi v(n);
    read(v);
    int cnt1 = count(all(v), 1);
    int cnt2 = count(all(v), 2);
    if (cnt2 == 0 and cnt1 != 0)
    {
        while (cnt1)
        {
            cout << 1 << ' ';
            cnt1--;
        }
        return;
    }
    else if (cnt1 == 0 and cnt2 != 0)
    {
        while (cnt2)
        {
            cout << 2 << ' ';
            cnt2--;
        }
        return;
    }
    else
    {
        cout << 2 << ' ' << 1 << ' ';
        cnt2--;
        cnt1--;
        while (cnt2)
        {
            cout << 2 << ' ';
            cnt2--;
        }
        while (cnt1)
        {
            cout << 1 << ' ';
            cnt1--;
        }
    }
 
    endl;
    return;
}
 
int32_t main()
{
    fastio();
    int t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}