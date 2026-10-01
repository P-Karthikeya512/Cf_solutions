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
    string s(n, 'e');
    int cnt = 0;
    for(int i=0;i<n;i++){
        cin >> s[i];
        if(s[i] == '1') cnt++;
    }
    if(cnt <= k) cout << "Alice
";
    else if(k > (n/2)) cout << "Alice
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