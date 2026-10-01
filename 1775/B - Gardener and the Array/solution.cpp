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
    vector<vector<int>> v;
    vector<int> dup;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        for(int j=0;j<x;j++){
            int y;
            cin >> y;
            dup.push_back(y);
        }
        v.push_back(dup);
        dup.clear();
    }
    map<int,int>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<v[i].size();j++) m[v[i][j]]++;
    }
    for(int i=0;i<n;i++){
        bool find = false;
        for(int j=0;j<v[i].size();j++){
            if(m[v[i][j]] == 1){
                find = true;
                break;
            }
        }
        if(!find){
            cout << "Yes
";
            return;
        }
    }
    cout << "No
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