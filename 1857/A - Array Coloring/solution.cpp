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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int o_sum = 0, e_sum = 0;
    for(int i:v){
        if(i%2 == 0) e_sum += i;
        else o_sum += i;
    }
    if(o_sum%2 == e_sum%2) cout << "YES
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