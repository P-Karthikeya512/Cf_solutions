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
    string s;
    cin >> s;
    set<int> protect, seen;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '0') continue;
        int last = (seen.size())?(*seen.rbegin()):(-1);
        if(last < i - (k-1) || last == -1) cnt++;
        seen.insert(i);
    }
    cout << cnt << endl;
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