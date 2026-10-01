#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string a, b;
        a += s[0];
        int x;
        bool found = true;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == '0' && found)
                a += s[i];
            else
            {
                if (found)
                    found = false;
                b += s[i];
            }
        }
        if (b == "")
            b = "0";
        int ai = stoi(a), bi = stoi(b);
        if (ai < bi)
            cout << ai << " " << bi << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}