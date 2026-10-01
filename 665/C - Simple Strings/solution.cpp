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
    int n = s.size();
    for(int i=1;i<n;i++){
        if(s[i] == s[i-1]){
            for(int j=0;j<26;j++){
                char ch = 'a' + j;
                if(s[i-1] != ch && (i+1 == n || ch != s[i+1])) {
                    s[i] = ch;
                    break;
                }
            }
        }
    }
    cout << s << endl;
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