#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v(n), q(k);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < k; i++)
        {
            cin >> q[i];
        }
        if (k > n - 1)
        {
            for (int i = 0; i < m; i++)
            {
                cout << 1;
            }
            cout << endl;
        }
        else if (k < n - 1)
        {
            for (int i = 0; i < m; i++)
            {
                cout << 0;
            }
            cout << endl;
        }
        else
        {
            map<int, int> freq;
            for (int i = 0; i < k; i++)
            {
                freq[q[i]]++;
            }
            string s = "";
            for (int i = 0; i < m; i++)
            {
                if (freq[v[i]] == 0)
                    s += '1';
                else
                    s += '0';
            }
            cout << s << endl;
        }
    }
    return 0;
}