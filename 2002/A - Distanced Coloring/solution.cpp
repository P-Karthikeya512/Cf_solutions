#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        if(max(n,m) <=k) cout << n*m << endl;
        else if(k < max(n,m) && k >= min(n,m)) cout << min(n,m)*k << endl;
        else cout << k*k << endl;
    }
    return 0;
}