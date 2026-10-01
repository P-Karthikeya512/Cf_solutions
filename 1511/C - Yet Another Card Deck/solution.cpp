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
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    // unordered_map<int,int> min_ind;
    // for(int i=0;i<n;i++) {
    //     if(min_ind.count(v[i]) == 0) min_ind[v[i]] = i + 1;
    // }
    // int curr = 0;
    while(m--){
        int x;
        cin >> x;
        int pos = find(v.begin(), v.end(), x) - v.begin();
        cout << pos + 1 << " ";
        rotate(v.begin(), v.begin() + pos, v.begin() + pos + 1);
    }
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