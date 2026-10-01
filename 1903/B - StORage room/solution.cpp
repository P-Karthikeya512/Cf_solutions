#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int inf = (1 << 30) - 1;
		vector<vector<int>> m(n, vector<int>(n));
		vector<int> ans(n, inf);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> m[i][j];
				if (i != j)
					ans[i] &= m[i][j];
				if (i != j)
					ans[j] &= m[i][j];
			}
		}
		bool foo = false;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i != j && (ans[i] | ans[j]) != m[i][j])
				{
					foo = true;
					break;
				}
			}
		}
		if (foo)
		{
			cout << "NO
";
		}
		else
		{
			cout << "YES
";
			for (int i : ans)
				cout << i << " ";
			cout << endl;
		}
	}
	return 0;
}