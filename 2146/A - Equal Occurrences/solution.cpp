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
    vector<int> freq(v[n-1]+1,0);
    for(int i=0;i<n;i++) freq[v[i]]++;
    int ans = 0;
    sort(freq.rbegin(), freq.rend());
    for(int i=0;i<=v[n-1];i++) ans = max(ans, freq[i] * (i + 1));
    cout << ans << endl;
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