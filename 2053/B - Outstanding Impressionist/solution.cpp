#include <bits/stdc++.h>
using namespace std;
 
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
#define countv(a) count(v.begin(), v.end(), a)
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
    vector<pair<int, int>> v;
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        p = max(r, p);
        v.push_back(make_pair(l, r));
    }
    vector<int> m(p + 1, 0), prefix(p + 1, 0);
    for (int i = 0; i < n; i++)
    {
        if (v[i].first == v[i].second)
            m[v[i].first]++;
    }
    for (int i = 0; i < m.size(); i++)
    {
        if (m[i] != 0)
            prefix[i] = 1;
    }
    for (int i = 1; i < prefix.size(); i++)
        prefix[i] += prefix[i - 1];
    string s;
    for (int i = 0; i < n; i++)
    {
        if (v[i].first == v[i].second)
        {
            if (v[i].first == v[i].second)
            {
                if (m[(v[i].first)] > 1)
                    s += '0';
                else
                    s += '1';
            }
        }
        else
        {
            int l = v[i].first, r = v[i].second;
            int count = prefix[r] - (l > 1 ? prefix[l - 1] : 0);
            if (count < r - l + 1)
                s += '1';
            else
                s += '0';
        }
    }
    printl(s);
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