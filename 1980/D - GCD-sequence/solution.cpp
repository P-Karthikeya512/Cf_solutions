#include <bits/stdc++.h>
using namespace std;
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
bool chk(vector<int> v){
    int g = gcd(v[0],v[1]);
    for(int i=1;i<v.size() - 1;i++){
        int cur = gcd(v[i],v[i+1]);
        if(cur < g) return false;
        g = cur;
    }
    return true;
}
 
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int del = -1,g = INT_MIN;
    for(int i=0;i<n-1;i++){
        int cur = gcd(v[i], v[i+1]);
        if(cur < g){
            del = i;
            break;
        }
        g = cur;
    }
    if(del == -1){
        cout <<"YES
";
        return;
    }
    vector<int> dup1 = v, dup2 = v,dup3 = v;
    if(del > 0) dup1.erase(dup1.begin() + del - 1);
    if(del < n-1) dup3.erase(dup3.begin() + del + 1);
    dup2.erase(dup2.begin() + del);
    if(chk(dup1) || chk(dup2) || chk(dup3)) cout << "YES
";
    else cout << "NO
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