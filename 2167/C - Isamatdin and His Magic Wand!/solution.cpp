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
    int odd = 0, eve = 0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i] % 2) odd++;
        else eve++;
    }
    if(odd && eve) sort(v.begin(), v.end());
    for(int i : v) cout << i << " ";
    cout << endl;
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