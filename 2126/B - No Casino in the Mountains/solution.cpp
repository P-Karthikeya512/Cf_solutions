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
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int cnt = 0, days = 0;
    for(int i=0;i<n;i++){
        if(v[i] == 0){
            cnt++;
            if(cnt == k){
                cnt = 0;
                days++;
                i++;
            }
        }else cnt = 0;
    }
    cout << days << endl;
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