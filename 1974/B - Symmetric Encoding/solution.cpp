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
    string s,t="";
    cin >> s;
    map<char,int>m;
    for(int i=0;i<n;i++){
        if(m[s[i]]==0){
            t += s[i];
            m[s[i]]++;
        }
    }
    sort(t.begin(),t.end());
    map<char,char> mp;
    for(int i=0;i<t.size();i++){
        mp[t[i]] = t[t.size() - 1 - i];
    }
    t = "";
    for(int i=0;i<n;i++){
        t += mp[s[i]];
    }
    cout << t << endl;
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