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
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int co = count(v.begin(),v.end(),1);
    bool fo = false;
    for(int i=1;i<n;i++){
        if(v[i]==v[i-1] and v[i] == 0){
            fo = true;
            break;
        }
    }
    if(fo || co == n){
        cout << "YES
";
        return ;
    }
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