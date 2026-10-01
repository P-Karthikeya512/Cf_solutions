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
    vector<int> s, c;
    s = v;
    sort(s.begin(),s.end());
    bool foo = false;
    for(int i=0;i<n;i++){
        if(v[i] != s[i]) c.push_back(v[i]);
    }
    if(c.empty()){
        cout << "NO
";
        return;
    }
    cout << "YES
";
    cout << c.size() << endl;
    for(int i : c) cout << i << " ";
    cout << endl;
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