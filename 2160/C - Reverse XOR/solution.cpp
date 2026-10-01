#include <bits/stdc++.h>
using namespace std;
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
string binary(int n){
    while(n){
        if(n & 1) break;
        n /= 2;
    }
    string res = "";
    while(n){
        int rem = n % 2;
        res += ('0' + rem);
        n /= 2;
    }
    if (res.empty()) res = "0";
    reverse(res.begin(), res.end());
    // cout << res << endl;
 
    return res;
}
 
void solve()
{
    int n;
    cin >> n;
    string curr = binary(n);
    string rev = curr;
    reverse(rev.begin(), rev.end());
    if(curr != rev){
        cout << "NO
";
        return;
    }
    if(curr.size() % 2 == 0){
        cout << "YES
";
        return;
    }
    n = curr.size();
    // if(n > 0) cout << curr[(n/2)] << endl;
    if(curr[(n)/2] == '0'){
        cout << "YES
";
        return;
    }
    cout << "NO
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