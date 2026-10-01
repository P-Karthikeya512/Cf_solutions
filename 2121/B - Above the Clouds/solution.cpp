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
    string s;
    cin >> s;
    bool pos = false;
    map<int,int> freq;
    freq[s[0]-'a']++;
    freq[s[n-1]-'a']++;
    for(int i=1;i<n-1;i++){
        if(freq[s[i]-'a'] > 0){
            pos = true;
            break;
        }
        freq[s[i]-'a']++;
    }
    if(pos) cout << "Yes
";
    else cout << "No
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