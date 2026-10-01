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
    int n,maxi = INT_MIN,sum = 0;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        maxi = max(maxi,v[i]);
        sum+=v[i];
    }
    cout << max((sum+n-2)/(n-1),maxi) << endl;
    return ;
}
 
int32_t main()
{
    fastio();
    int t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}