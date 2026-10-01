#include <bits/stdc++.h>
using namespace std;
#define int long long
 
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
    string s;
    cin >> s;
    set<char> st;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        char c = s[i];
        auto it = st.find(c);
        if(it == st.end()) st.insert(c);
        v[i] = st.size();
    }
    int ans = 0;
    for(int i : v) ans += i;
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