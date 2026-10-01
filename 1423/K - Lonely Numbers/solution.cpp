#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 10000000;
vector<bool> is_prime(MAXN+1, true);
vector<int> prefix(MAXN+1, 0);
 
void sieve() {
    is_prime[0] = false;
    is_prime[1] = false;
    for (int i = 2; i * i <= MAXN; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAXN; j += i)
                is_prime[j] = false;
        }
    }
    for (int i = 1; i <= MAXN; ++i){
        prefix[i] = prefix[i-1] + (is_prime[i] ? 1 : 0);
    }
}
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve()
{
    int n;
    cin >> n;
    int start = (int)sqrt(n) + 1;
    int result = prefix[n] - prefix[start - 1];
    cout << result + 1 << '
';
}
 
int32_t main()
{
    fastio();
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}