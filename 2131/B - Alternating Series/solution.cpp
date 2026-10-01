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
    vector<int> v(n,-1);
    for(int i=1;i<n;i+=2) v[i] = 3;
    if(n % 2 == 0) v[n-1] = 2;
    for(int i=0;i<n;i++) cout << v[i] << ' ';
    cout << endl;
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