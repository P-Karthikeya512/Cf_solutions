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
    for(int i=0;i<n;i++) cin >> v[i];
    int unq = -1;
    vector<pair<int,int>> res;
    for(int i=1;i<n;i++){
        if(v[i] != v[0]){
            unq = i;
            res.push_back({1,i+1});
        }
    }
    if(unq == -1) {
        cout << "NO
";
        return;
    }
    for(int i=1;i<n;i++){
        if(v[i] == v[0]) res.push_back({unq + 1 , i + 1});
    }
    cout << "YES
";
    for(auto [u, v]: res) cout << u << " " << v << endl;
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