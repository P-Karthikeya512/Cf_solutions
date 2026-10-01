#include <bits/stdc++.h>
using namespace std;
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
bool is_sq(int x){
    int sqrtx = sqrt(x);
    return sqrtx*sqrtx == x;
}
 
void solve()
{
    int n;
    cin >> n;int x;
    bool foo = false;
    for(int i=0;i<n;i++) {
        cin >> x;
        if(!is_sq(x)){
            foo = true;
        }
    }
    if(foo) cout << "YES
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