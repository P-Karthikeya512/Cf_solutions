#include <bits/stdc++.h>
using namespace std;
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    int c0 = count(s.begin(), s.end(), '0');
    int half = n/2;
    int diff = c0 - half;
    if (k >= abs(diff) && k <= half && ((k - diff) % 2 == 0)) cout << "YES
";
    else cout << "NO
";
    return ;
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