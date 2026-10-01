#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define vi vector<int>
#define get cin >>
#define disp(a) for (auto x : a) cout << x << " ";
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
int dfs(int node, vector<vi> &g, vector<bool> &visited)
{
    if (visited[node]) return 0;
    visited[node] = true;
    int count = 1;
    for (int nei : g[node]) count += dfs(nei, g, visited);
    return count;
}
 
void solve()
{
    int n;
    get n;
    vi v(n), d(n), res(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector<vi> g(n + 1);
    for (int i = 0; i < n; i++) g[i + 1].push_back(v[i]);
    for (int i = 0; i < n; i++) cin >> d[i];
    vector<bool> visited(n + 1, false);
    int totalVisited = 0;
    for (int i = 0; i < n; i++)
    {
        int newlyVisited = dfs(d[i], g, visited);
        totalVisited += newlyVisited;
        res[i] = totalVisited;
    }
    disp(res);
    cout << "
";
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