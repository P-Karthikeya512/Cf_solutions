#include <bits/stdc++.h>
using namespace std;
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
vector<int> best(vector<int> a){
    int mx1 = -1, mx2 = -1, mx3 = -1;
    for(int i = 0;i < a.size(); i++){
        if(mx1 == -1 or a[i] > a[mx1]) {
            mx3 = mx2;
            mx2 = mx1;
            mx1 = i;
        }
        else if(mx2 == -1 or a[i] > a[mx2]){
            mx3 = mx2;
            mx2 = i;
        }
        else if(mx3 == -1 or a[i] > a[mx3]){
            mx3 = i;
        }
    }
    return {mx1, mx2, mx3};
}
 
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    for(int i=0;i<n;i++) cin >> c[i];
    int ans = -1e9;
    vector<int> mx1 = best(a), mx2 = best(b), mx3 = best(c);
    for(int i : mx1){
        for(int j : mx2){
            for(int k : mx3){
                if(i != j and j != k and k != i) ans = max(ans, a[i] + b[j] + c[k]);
            }
        }
    }
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