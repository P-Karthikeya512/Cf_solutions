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
    map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
        int l;
        cin >> l;
        for(int j=0;j<l;j++){
            int x;
            cin >> x;
            mp[x].push_back(i);
        }
    }
    bool all = true;
    set<int> unq;
    for(int i=1;i<=m;i++){
        if(mp[i].size() == 1) unq.insert(mp[i][0]);
        if(!mp[i].size()) all = false;
    }
    int opt = n - unq.size();
    if(all && opt >= 2) cout << "YES
";
    else cout << "NO
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