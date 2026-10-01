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
    char c;
    string s;
    cin >> n >> c >> s;
    vector<int> pos;
    for(int i=0;i<n;i++){
        if(s[i] != c) pos.push_back(i+1);
    }
    if(pos.size() == 0){
        cout << 0 << endl;
        return;
    }
    if(pos.size() == 1){
        cout << 1 << endl;
        if(pos[0] == n) cout << n-1 << endl;
        else cout << n << endl;
        return;
    }
    int good = -1;
    for(int i=1;i<=n;i++){
        bool ok = true;
        for(int j=i;j<=n;j+=i){
            if(s[j-1] != c){
                ok = false;
                break;
            }
        }
        if(ok){
            good = i;
            break;
        }
    }
    if(good == -1){
        cout << "2
" << n << " " << n-1 << endl;
        return;
    }
    cout << 1 << "
" << good << endl;
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