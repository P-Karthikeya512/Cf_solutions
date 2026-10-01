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
    int n, m;
    cin >> n >> m;
    vector<int> v(n), zeros(n,0);
    int digi = 0;
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<n;i++){
        while(v[i] % 10 == 0){
            zeros[i]++;
            v[i] /= 10;
            digi++;
        }
        while(v[i] > 0){
            digi++;
            v[i] /= 10;
        }
    }
    sort(zeros.begin(), zeros.end(), greater<>());
    for(int i=0;i<n;i+=2) digi -= zeros[i];
    (digi > m)?(cout << "Sasha
"):(cout << "Anna
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