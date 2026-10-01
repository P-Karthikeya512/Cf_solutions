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
    for(int i=2;i<=n;i+=2) cout << i << " ";
    if(n%2 == 0){
        for(int i = n-1; i>=1; i-=2) cout << i << ' ';
    }
    else for(int i=n;i>=1;i-=2) cout << i << " ";
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