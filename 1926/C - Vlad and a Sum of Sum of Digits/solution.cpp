#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
vector<int> pre(2e5 + 1,0);
int dig(int x){
    int res = 0;
    while(x > 0){
        res += (x%10);
        x = x/10;
    }
    return res;
}
 
void solve()
{
    int x;
    cin >> x ;
    cout << pre[x] << endl;
return ;
}
 
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    for(int i=1;i<pre.size();i++) pre[i] = pre[i-1] + dig(i);
    while (t--)
    {
        solve();
    }
    return 0;
}