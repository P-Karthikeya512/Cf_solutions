#include <bits/stdc++.h>
using namespace std;
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
bool can(int n, int x, int y){
    if(x==0) return y==n-1;
    if(x==n-1) return y!=0;
    return x > y;
}
 
void solve()
{
    int n;cin >> n;
    string s;
    cin >> s;
    bool g = false;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            bool g_m = true;
            for(int j=0;j<n;j++){
                if(s[j]=='B' and can(n,j,i)) g_m = false;
            }
            if(g_m) g = true;
        }
    }
    if(g) cout << "Alice
";
    else cout << "Bob
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