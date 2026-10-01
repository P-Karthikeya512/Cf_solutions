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
    int n,x;
    cin >> n >> x;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    map<int,int> freq;
    for(int i=0;i<n;i++) freq[v[i]]++;
    int mex = 1e9;
    for(int i=0;i<=n;i++){
        if(freq[i] == 0){
            mex = min(mex,i);
        }
        freq[i + x] += freq[i] - 1;
    }
    cout << mex << endl;
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