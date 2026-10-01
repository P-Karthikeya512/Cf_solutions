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
    sort(v.begin(),v.end());
    if(v[0] != v[1]){
        cout << "YES
";
        return;
    }
    bool foo = false;
    for(int i=1;i<n;i++){
        if(v[i]%v[0] != 0){
            foo = true;
            break;
        }
    }
    (foo)?(cout << "YES
"):(cout << "NO
");
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