#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(v) v.begin(), v.end()
 
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
    vector<int> fact;
    for(int i=1;i*i<=n;i++){
        if(n % i == 0){
            fact.push_back(i);
            if(i != (n/i)) fact.push_back(n/i);
        }
    }
    sort(fact.begin(), fact.end());
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int ans = *max_element(all(v)) - *min_element(all(v));
    for(int i=1;i<fact.size();i++){
        int ws = fact[i];
        int maxi = LLONG_MIN, mini = LLONG_MAX;
        for(int j = 0; j < n; j += ws){
            int sum = 0;
            for(int k = j; k < j + ws && k < n; k++) sum += v[k];
            maxi = max(maxi, sum);
            mini = min(mini, sum);
        }
        ans = max(ans, maxi - mini);
    }
    cout << ans << endl;
return ;
}
 
int32_t main()
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