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
    int k;
    get k;
    vi v(n);
    read(v);
    int hi = sqrtl(k);
    int lo = 1;
    while (lo <= hi)
    {
        int mid = lo + ((hi - lo) / 2);
        int area = 0;
        for (int i = 0; i < v.size(); i++)
        {
            int base_area = ((2 * (mid)) + v[i]) * ((2 * (mid)) + v[i]);
            area += base_area;
            if (area > k)
                break;
        }
        if (area == k)
        {
            cout << mid;
            endl;
            return;
        }
        if (area > k)
            hi = mid - 1;
        else
            lo = mid + 1;
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