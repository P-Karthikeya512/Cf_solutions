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
    map<char,int> m;
    for(auto ch: s) m[ch]++;
    int odd = 0;
    for(int i=0;i<s.size();i++){
        if(m[s[i]] & 1) odd++;
    }
    int n = s.size(),nok = 1;
    if(!odd){
        cout << "First
";
        return;
    }
    while(n>1){
        odd--;
        n--;
        nok = !nok;
    }
    if(nok) cout << "First
";
    else cout << "Second
";
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