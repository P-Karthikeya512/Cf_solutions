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
    int n, k;
    cin >> n >> k;
    int remain = (n * n) - k;
    int rt = sqrt(remain);
    if(remain == 1){
        cout << "NO
";
        return ;
    }
    cout << "YES
";
    for(int i=0;i<n;i++){
        string s = "";
        for(int j=0;j<n;j++){
            if(k > 0){
                s += 'U';
                k--;
            }else if(i == n-1 && j == n-1) s += 'L';
            else if(i == n-1) s += 'R';
            else s += 'D';
        }
        cout << s << endl;
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