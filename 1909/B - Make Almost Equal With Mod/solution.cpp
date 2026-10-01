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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    set<int> st;
    for(int i=1;i<61;i++){
        st.clear();
        int curr = 1LL << i;
        for(int j=0;j<n;j++) st.insert(v[j] % curr);
        if(st.size() == 2){
            cout << curr << endl;
            return;
        }
    }
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