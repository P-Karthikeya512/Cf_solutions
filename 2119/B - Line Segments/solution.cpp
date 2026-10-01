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
    int n,px,py,qx,qy;
    cin >> n >> px >> py >> qx >> qy;
    vector<int> v(n);
    int maxi = 0;
    long double dist = (px - qx)*(px - qx) + (py - qy)*(py - qy);
    dist = sqrtl(dist);
    for(int i=0;i<n;i++){
        cin >> v[i];
        maxi += v[i];
    }
    if(dist > maxi) {
        cout << "No
";
        return;
    }
    sort(v.begin(),v.end());
    int mini = v[n-1];
    for(int i=0;i<n-1;i++) {
        mini -= v[i];
        if(mini < 0){
            mini = 0;
            break;
        }
    }
    if(dist < mini){
        cout << "No
";
        return;
    }
    cout << "Yes
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