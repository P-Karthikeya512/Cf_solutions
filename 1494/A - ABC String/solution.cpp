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
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
bool check(string s)
{
    int n = 0;
    fori(s.size())
    {
        if (s[i] == '(')
            n++;
        else
            n--;
        if (n < 0)
        {
            return false;
            break;
        }
    }
    if (n == 0)
        return true;
    else
        return false;
}
 
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    if (s[0] == s[n - 1])
        printl("NO");
    else
    {
        string s1, s2;
        fori(n)
        {
            if (s[i] == s[0])
            {
                s1 += '(';
                s2 += '(';
            }
            else if (s[i] == s[n - 1])
            {
                s1 += ')';
                s2 += ')';
            }
            else
            {
                s1 += '(';
                s2 += ')';
            }
        }
        if (check(s1) || check(s2))
            printl("YES");
        else
            printl("NO");
    }
}
 
int main()
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