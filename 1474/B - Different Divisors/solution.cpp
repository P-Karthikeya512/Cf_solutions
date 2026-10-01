#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
#define all(v) (v).begin(), (v).end()
#define py cout << "YES
"
#define pn cout << "NO
"
#define pm cout << -1 << endl;
#define endl cout << endl;
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
const int MAX = 1e5 + 1;
 
vi sieve(int x){
    vector<bool> prime(x + 1, true);
    prime[0] = prime[1] = false;  // 0 and 1 are not prime
    for(int i = 2; i * i <= x; i++) {
        if(prime[i]) {
            for(int j = i * i; j <= x; j += i) {
                prime[j] = false;
            }
        }
    }
    vi primes;
    for(int p = 2; p <= x; p++) {
        if(prime[p]) {
            primes.push_back(p);
        }
    }
    return primes;
}
 
void solve(const vi &primes)
{
    int n;
    cin >> n;
    auto it1 = upper_bound(all(primes), n);   // This gives us the first prime > n
    int x = *it1;
    auto it2 = lower_bound(all(primes), x + n); // This gives us the first prime >= n + x
    int y = *it2;
    cout << x * y << '
';
}
 
int main()
{
    fastio();
    vi primes = sieve(MAX);
    int t;
    cin >> t;
    while (t--) {
        solve(primes); // Solve for each test case
    }
    return 0;
}