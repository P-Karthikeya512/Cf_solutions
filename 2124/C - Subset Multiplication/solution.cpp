#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
 
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int x = 1;
    bool found = false;
    for(int i=0;i<n-1;i++){
        if(v[i+1] % v[i] != 0){
            int g = gcd(v[i], v[i+1]);
            int u = v[i] / g;
            x = lcm(x, u);
            found = true;
        }
    }
    !found?cout << 1 << endl:cout << x << endl;
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