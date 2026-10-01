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
    bool five_pre = 0;
    for(int i=0;i<n;i++) {
        cin >> v[i];
        if(v[i] % 5 == 0){
            v[i] = v[i] + (v[i] % 10);
            five_pre = 1;
        }
    }
    bool done = true;
    if(five_pre){
        sort(v.begin(),v.end());
        for(int i=1;i<n;i++){
            if(v[i] != v[i-1]){
                done = false;
                break;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            while((v[i] % 10) != 8) v[i] = v[i] + (v[i] % 10);
        }
        sort(v.begin(), v.end());
        for(int i=1;i<n;i++){
            int diff = v[i] - v[i-1];
            if(diff % 20 != 0){
                done = false;
                break;
            }
        }
    }
    (done)?(cout << "Yes
"):(cout << "No
");
    return;
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