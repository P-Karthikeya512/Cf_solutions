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
    string s;
    cin >> s;
    int cnt0 = count(s.begin(), s.end(), '0'), ans = 0;
    for(int i=0;i<cnt0;i++){
        if(s[i] == '1') ans++;
    }
    cout << ans << endl;
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