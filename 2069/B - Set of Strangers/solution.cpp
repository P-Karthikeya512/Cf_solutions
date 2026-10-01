#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int long long
#define vi vector<int>
#define all(v) (v).begin(), (v).end()
#define pii pair<int, int>
#define vpii vector<pii>
#define str string
#define pb push_back
#define ff first
#define ss second
#define get cin >>
#define py cout << "YES
"
#define pn cout << "NO
"
#define pm cout << -1 << endl;
#define endl cout << endl;
#define rep(i, x, y) for (int i = x; i < y; i++)
#define rrep(i, x, y) for (int i = x; i >= y; i--)
#define ct continue
#define br break
#define disp(a)                            \
	{                                      \
		for (int i = 0; i < a.size(); i++) \
			cout << a[i] << " ";           \
	}
#define read(arr)                   \
	{                               \
		int n = arr.size();         \
		for (int i = 0; i < n; i++) \
			cin >> arr[i];          \
	}
 
void fastio()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}
 
void solve()
{
	int n, m;
	get n;
	get m;
	vector<vi> v(n, vi(m));
	map<int, int> m1, m2;
	int diff = 0;
	rep(i, 0, n)
	{
		rep(j, 0, m)
		{
			get v[i][j];
			m1[v[i][j]]++;
			if (m1[v[i][j]] == 1)
				diff++;
		}
	}
	if (n == 1 && m == 1)
	{
		cout << 0;
		endl;
		return;
	}
	int nonstranger = 0;
	rep(i, 0, n)
	{
		rep(j, 0, m)
		{
			if (i < n - 1 && v[i][j] == v[i + 1][j])
				if (++m2[v[i][j]] == 1)
					nonstranger++;
			if (j < m - 1 && v[i][j] == v[i][j + 1])
				if (++m2[v[i][j]] == 1)
					nonstranger++;
		}
	}
	if (nonstranger == 0)
	{
		cout << diff - 1;
		endl;
	}
	else
	{
		cout << diff - nonstranger + (nonstranger - 1) * 2;
		endl;
	}
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