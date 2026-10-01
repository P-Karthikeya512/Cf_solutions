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
    int n,s;
    cin >> n >> s;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int mini = *min_element(v.begin(),v.end());
    int maxi = *max_element(v.begin(),v.end());
    cout << min(abs(s-maxi),abs(s-mini)) + maxi - mini << endl;
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