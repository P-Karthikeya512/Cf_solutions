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
    int n, a, b;
    cin >> n >> a >> b;
    if(a <= b){
        if((n%2) == (b%2)) cout << "YES
";
        else cout << "NO
";
    }
    else{
        if((n % 2) == (b % 2) && (n % 2) == (a % 2)) cout << "YES
";
        else cout << "NO
";
    }
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