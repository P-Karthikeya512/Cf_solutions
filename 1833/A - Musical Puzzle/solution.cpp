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
    int n;
    cin >> n;
    string s,sub;
    cin >> s;
    set<string> sp;
    for (int i = 0; i < n - 1; ++i){
        sub = s.substr(i, 2);
        sp.insert(sub);
    }
    cout << sp.size() << '
';
    sp.clear();
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