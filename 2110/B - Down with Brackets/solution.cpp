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
    string s;
    cin >> s;
    int co = 0;
    vector<int>val;
    for(int i=0;i<s.size();i++){
        if(s[i] == '(') co++;
        else co--;
        val.push_back(co);
    }
    bool foo = false;
    for(int i=1;i<val.size()-1;i++){
        if(val[i] == 0){
            foo = true;
            break;
        }
    }
    if(foo) cout << "YES
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