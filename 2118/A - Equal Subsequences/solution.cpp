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
        int n, k;
    cin >> n >> k;
    string s = "";
    for(int i=0;i<k;i++) s+='1';
    for(int i=k;i<n;i++) s+='0';
    cout << s << endl;
    }
    return 0;
}