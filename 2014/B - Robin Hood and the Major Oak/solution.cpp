#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long sum = ((n*(n+1))/2) - (((n-k)*(n-k+1)/2));
        if(sum%2==0) cout << "YES
";
        else cout << "NO
";
    }
    return 0;
}