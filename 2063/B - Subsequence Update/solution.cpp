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
    int n, l, r;
    get n;
    get l;
    get r;
    vi arr(n);
    read(arr);
    if (l == 1 && r == n)
    {
        cout << accumulate(all(arr), 0LL);
        endl;
        return;
    }
    multiset<int> lr(arr.begin() + l - 1, arr.begin() + r);
    multiset<int> left(arr.begin(), arr.begin() + l - 1);
    multiset<int> right(arr.begin() + r, arr.end());
    multiset<int> dup(arr.begin() + l - 1, arr.begin() + r);
    while (!left.empty() && *(left.begin()) < *(lr.rbegin()))
    {
        lr.erase(prev(lr.end()));
        lr.insert(*left.begin());
        left.erase(left.begin());
    }
    while (!right.empty() && *(right.begin()) < *(dup.rbegin()))
    {
        dup.erase(prev(dup.end()));
        dup.insert(*right.begin());
        right.erase(right.begin());
    }
    int sum = accumulate(all(lr), 0LL), sum2 = accumulate(all(dup), 0LL);
    cout << min(sum, sum2);
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