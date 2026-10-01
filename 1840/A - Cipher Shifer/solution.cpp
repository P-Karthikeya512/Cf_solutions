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
    string ans = "";
    for(int i=0;i<n;){
        ans += s[i];
        char curr = s[i];
        while(i+1 < n && s[i+1] != curr)i++;
        i += 2;
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