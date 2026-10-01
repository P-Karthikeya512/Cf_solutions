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
 
const int N = 1e7;
vector<int> primes(N);
 
void solve()
{
    int n;
    get n;
    primes[0] = 0;
    primes[1] = 0;
    for (int i = 2; i < N; i++)
        primes[i] = 1;
    if (n == 1)
    {
        cout << 1;
        endl;
        cout << 1;
        endl;
        return;
    }
    if (n == 2)
    {
        cout << 1;
        endl;
        cout << 1 << ' ' << 1;
        endl;
        return;
    }
    rep(i, 0, N)
    {
        if (primes[i] == 1)
        {
            for (int j = i * i; j < N; j += i)
            {
                primes[j] = 2;
            }
        }
    }
    cout << 2;
    endl;
    for (int i = 2; i <= n + 1; i++)
        cout << primes[i] << " ";
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