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
    vector<int> v(n), temp;
    for(int i=0;i<n;i++) cin >> v[i];
    int l = 0, r = n-1;
    string s = "";
    bool flip = false;
    while(s.size() < n){
        if(s.empty()){
            if(v[l] > v[r]) s += 'R', temp.push_back(v[r--]);
            else s += 'L', temp.push_back(v[l++]);
        }
        else if(temp.back() < v[l] and temp.back() < v[r]){
            if(v[l] < v[r]) s += 'R', temp.push_back(v[r--]);
            else s += 'L', temp.push_back(v[l++]);
        }
        else if(temp.back() > v[l] and temp.back() > v[r]){
            if(v[l] < v[r]) s += 'L', temp.push_back(v[l++]);
            else s += 'R', temp.push_back(v[r--]);
        }
        else{
            if(flip)s += 'L', temp.push_back(v[l++]);
            else s += 'R', temp.push_back(v[r--]);
            flip = !flip;
        }
    }
    cout << s << endl;
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