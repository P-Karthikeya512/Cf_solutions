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
    vector<int> ans;
    int pro = 1;
    for(int i=1;i<n;i++){
        if(gcd(n,i) == 1){
            pro = (pro * i) % n;
            ans.push_back(i);
        }
    }
    if(pro != 1) ans.pop_back();
    cout << ans.size() << endl;
    for(int i : ans) cout << i << ' ';
    cout << endl;
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