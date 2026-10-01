#include <bits/stdc++.h>
using namespace std;
 
#define f(n) \
    int n;   \
    cin >> n;
#define vin                     \
    vector<int> v(n);           \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve()
{
    f(n);
    f(k);
    vin;
    sort(v.begin(), v.end());
    int sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (sum + v[i] <= k)
            sum += v[i];
        else
            break;
    }
    cout << k - sum << endl;
}
 
int main()
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