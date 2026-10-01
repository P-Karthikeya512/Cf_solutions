#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int long long
#define f(n) \
    int n;   \
    cin >> n;
#define vin                     \
    vector<int> v(n);           \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define sort(v) sort(v.begin(), v.end())
#define print(n) cout << n << ' '
#define printl(n) cout << n << endl
#define fori(n) for (int i = 0; i < n; i++)
#define ford(n) for (int i = n - 1; i >= 0; i--)
#define count(a) count(v.begin(), v.end(), a)
#define counts(a) count(v.begin(), v.end(), 'a')
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve()
{
    f(n);
    f(q);
    vin(n);
    vector<int> vq(q);
    for (int i = 0; i < q; i++)
        cin >> vq[i];
    for (int i = 0; i < q; i++)
    {
        int x = vq[i];
        vq[i] = pow(2, x);
    }
    int mini = vq[0];
    vector<int> fin;
    fin.push_back(mini);
    for (int i = 1; i < q; i++)
    {
        if (vq[i] < mini)
        {
            mini = vq[i];
            fin.push_back(vq[i]);
        }
    }
    for (int i = 0; i < fin.size(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[j] % fin[i] == 0)
            {
                v[j] += (fin[i] / 2);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        print(v[i]);
    }
    cout << endl;
    return;
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