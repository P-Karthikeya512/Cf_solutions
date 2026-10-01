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
    int sum = 0;
    for(int i=0;i<n;i++) {
        cin >> v[i];
        if(v[i] < 0) sum -= v[i];
        else sum += v[i];
    }
    cout << sum << endl;
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