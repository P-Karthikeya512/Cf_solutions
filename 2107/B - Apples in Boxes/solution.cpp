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
    int n,t;
    cin >> n >> t;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    map<int,int> m;
    for(int i=0;i<n;i++) m[v[i]]++;
    int maxi = *max_element(v.begin(),v.end()), mini = *min_element(v.begin(),v.end());
    if((maxi-1) > mini + t){
        cout << "Jerry
";
        return;
    }
    if(maxi - mini == t+1 and m[maxi]>1){
        cout << "Jerry
";
        return;
    }
    int sum = 0;
    for(int i=0;i<n;i++) sum += v[i];
    (sum%2)?(cout << "Tom
"):(cout << "Jerry
");
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