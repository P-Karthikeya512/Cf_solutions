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
    sort(v.begin(),v.end());
    int possible = v[0]*v[n-1];
    vector<int> div;
    for(int i=2;i*i<=possible;i++){
        if(possible%i == 0){
            div.push_back(i);
            if(i!=(possible/i)) div.push_back(possible/i);
        }
    }
    sort(div.begin(),div.end());
    if(div == v){
        cout << possible << endl;
    }
    else cout << -1 << endl;
}
 
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}