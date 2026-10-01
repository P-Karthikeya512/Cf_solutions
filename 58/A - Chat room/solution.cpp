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
    string s;
    cin >> s;
    if(s.size() < 4){
        cout << "NO
";
        return;
    }
    string target = "hello";
    int j = 0;
    for (char c : s) {
        if (c == target[j]) j++;
        if (j == 5) break;
    }
    if (j == 5) cout << "YES
";
    else cout << "NO
";
return ;
}
 
int32_t main()
{
    fastio();
    int t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}