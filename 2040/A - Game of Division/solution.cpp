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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    map<int,set<int>> mp;
    for(int i=0;i<n;i++){
        int rem = v[i] % k;
        mp[rem].insert(i + 1);
    }
    for(auto [key, st] : mp){
        if(st.size() == 1){
            cout << "YES
" << *st.begin() << endl;
            return;
        }
    }
    cout << "NO
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