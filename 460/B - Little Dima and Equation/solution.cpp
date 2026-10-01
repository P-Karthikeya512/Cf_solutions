#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
int sum(int x){
    int su = 0;
    while(x){
        su += (x%10);
        x/=10;
    }
    return su;
}
 
int po(int ba, int ex){
    int res = 1;
    for(int i=0;i< ex;i++) res *= ba;
    return res;
}
 
void solve()
{
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> ans;
    for(int s_x = 1; s_x <= 81; s_x++){
        int x = b*po(s_x,a) + c;
        if(sum(x) == s_x && x < 1e9) ans.push_back(x);
    }
    cout << ans.size() << endl;
    for(int i:ans) cout << i << ' ';
    return ;
}
 
int32_t main()
{
    fastio();
    int t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}