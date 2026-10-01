#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool found = false;
    int l, r;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            found = true;
            l = i;
            r = i + 1;
            break;
        }
    }
    if (found)
    {
        cout << ("YES") << endl;
        cout << l + 1 << " " << r + 1 << endl;
    }
    else
        cout << "NO" << endl;
    return;
}
 
int32_t main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}