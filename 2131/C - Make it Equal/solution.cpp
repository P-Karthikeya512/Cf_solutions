#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve()
{
    int n, k, x;
    cin >> n >> k;
    multiset<int> a, b;
    for(int i=0;i<n;i++) {
        cin >> x;
        int r1 = (x % k);
        int p1 = (k - r1) % k;
        a.insert(min(r1, p1));
    }
    for(int i=0;i<n;i++) {
        cin >> x;
        int r = (x % k);
        int p = abs((k - r)) % k;
        b.insert(min(r,p));
    }
    (a == b)?(cout << "YES
"):(cout << "NO
");
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