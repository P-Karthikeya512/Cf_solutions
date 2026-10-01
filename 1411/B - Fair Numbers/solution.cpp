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
    bool found = false;
    vector<int> v;
    while(!found){
        int dup = n;
        while(dup > 0){
            if(dup % 10)v.push_back(dup % 10);
            dup /= 10;
        }
        bool nfound = false;
        for(int i : v){
            if(n % i != 0){
                nfound = true;
                break;
            }
        }
        if(!nfound){
            found = true;
            break;
        }
        n++;
        v.clear();
    }
    cout << n << endl;
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