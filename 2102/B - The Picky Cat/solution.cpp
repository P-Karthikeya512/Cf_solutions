#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;
        long long x = llabs(a[0]);
        int r = 0;
        for (int i = 0; i < n; i++){
           if (llabs(a[i]) <= x) r++;
        }
        int limit = (n/2) + 1;
        cout << (r <= limit ? "YES
" : "NO
");
    }
    return 0;
}