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
    int n;
    cin >> n;
    vector<int> b(n), mini(n);
    for(int i=0;i<n;i++) cin >> b[i];
    mini[0] = b[0];
    bool foo = false;
    for(int i=1;i<n;i++) {
        mini[i] = min(mini[i-1], b[i]);
        if(b[i] >= 2*mini[i]){
            foo = true;
            break;
        }
    }
    if(foo) cout << "NO
";
    else cout << "YES
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