#include <bits/stdc++.h>
using namespace std;
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
 
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
    cin >> n;
    vector<tuple<int,int,int>> v;
    v.push_back({1,1,n});
    v.push_back({2,1,n-1});
    for(int i = 3;i<n;i++){
        v.push_back({i,1,i-1});
        v.push_back({i,i,n});
    }
    v.push_back({n,2,n});
    cout << v.size() << '
';
    for(int i=0;i<v.size();i++){
        cout << get<0>(v[i]) << " " << get<1>(v[i]) << " " << get<2>(v[i]);
        cout << endl;
    }
    }
    return 0;
}