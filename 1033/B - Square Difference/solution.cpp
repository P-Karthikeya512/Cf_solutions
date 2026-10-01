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
 
bool is_prime(ll x){
if(x<2) return false;
if(x==2 || x==3) return true;
if(x%2==0 or x%3==0) return false;
for(int i=5;i*i<=x;i+=6){
if(x%i==0 or x%(i+2)==0) return false;
}
return true;
}
 
void solve()
{
int a; int b;
get a; get b;
if(a-b==1 and is_prime(a+b)) py;
else pn;
return;
}
 
int32_t main()
{
    fastio();
    int t;
cin >>t;
    while (t--)
    {
        solve();
    }
    return 0;
}