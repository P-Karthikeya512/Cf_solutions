#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int long long
#define vi vector<int>
#define all(v) (v).begin(), (v).end()
#define pii pair<int,int>
#define vpii vector<pii>
#define str string
#define pb push_back
#define ff first
#define ss second
#define get cin >>
#define py cout << "YES
"
#define pn cout << "NO
"
#define pm cout << -1 << endl;
#define endl cout << endl;
#define rep(i,x,y) for(int i=x;i<y;i++)
#define rrep(i,x,y) for(int i=x;i>=y;i--)
#define ct continue
#define br break
#define disp(a) \
  { \
    for (int i = 0; i < a.size(); i++) \
      cout << a[i] << " "; \
  }
#define read(arr) \
  { \
    int n = arr.size(); \
    for (int i = 0; i < n; i++) \
      cin >> arr[i]; \
  }
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve()
{
int n,id = -1;get n;
int ans = 1e9;
for(int ones = 0; ones <= 2; ones++){
    for(int threes = 0; threes <= 1; threes++){
        for(int sixes = 0; sixes <= 4; sixes++){
            for(int tens = 0; tens <= 2; tens++){
                int sum = 1*ones + 3*threes + 6*sixes + 10*tens;
                    if(sum <= n && (n-sum)%15 == 0){
                        ans = min(ans, ones + threes + sixes + tens + (n-sum)/15);
                    }
                }
            }
        }
    }
cout << ans; endl;
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