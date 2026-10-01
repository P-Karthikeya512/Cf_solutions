#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long a,b,c,d;
            cin >> a >> b >> c >> d;
            if(b <= d) ans +=  max(0LL, a-c);
            else ans += a + max(0LL,b-d);
        }
        cout << ans << "
";
    }
    return 0;
}