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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    vector<int> pos(n), neg(n);
    pos[0] = (v[0] > 0);
    neg[0] = (v[0] < 0);
    for(int i=1;i<n;i++){
        if(v[i] < 0){
            pos[i] = neg[i-1];
            neg[i] = 1 + pos[i-1];
        }
        if(v[i] > 0){
            pos[i] = 1 + pos[i-1];
            neg[i] = neg[i-1];
        }
    }
    int ansp = 0, ansn = 0;
    for(int i=0;i<n;i++){
        ansp += pos[i];
        ansn += neg[i];
    }
    cout << ansn << " " << ansp << endl;
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