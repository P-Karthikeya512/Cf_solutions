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
    int ind = -1;
    for(int i=0;i<n-1;i++){
        if(v[i] > v[i+1]){
            ind = i+1;
            break;
        }
    }
    if(ind == -1){
        cout << "YES
";
        return;
    }
    for(int i=ind;i<n-1;i++){
        if(v[i] < v[i+1]){
            cout << "NO
";
            return;
        }
    }
    cout << "YES
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