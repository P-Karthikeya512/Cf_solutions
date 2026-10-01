#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++)  cin >> a[i];
        if (k == 1) {
            int aj = a[j];
            int M  = *max_element(a.begin()+1, a.begin()+n+1);
            cout << (aj == M ? "YES
" : "NO
");
        } else cout << "YES
";
 
    }
    return 0;
}