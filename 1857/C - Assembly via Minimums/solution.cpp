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
    int m = (n * (n - 1)) / 2;
    vector<int> v(m);
    for(int i=0;i<m;i++) cin >> v[i];
    sort(v.begin(), v.end());
    vector<int> ans;
    int j = 0;
    for(int i=0;i<m;){
        ans.push_back(v[i]);
        i += (n-j-1);
        j++;
    }
    ans.push_back(v[m-1]);
    for(int i : ans) cout << i << ' ';
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