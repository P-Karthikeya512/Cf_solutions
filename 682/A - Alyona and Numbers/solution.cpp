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
int n,m;
get n;get m;
if(n>m) swap(n,m);
int mod1_n = 0, mod2_n = 0, mod3_n = 0, mod4_n = 0, mod5_n = 0;
rep(i,1,n+1){
if(i%5==0) mod5_n++;
else if(i%5==1) mod1_n++;
else if(i%5==2) mod2_n++;
else if(i%5==3) mod3_n++;
else mod4_n++;
}
int mod1_m = 0, mod2_m = 0, mod3_m = 0, mod4_m = 0, mod5_m = 0;
rep(i,1,m+1){
if(i%5==0) mod5_m++;
else if(i%5==1) mod1_m++;
else if(i%5==2) mod2_m++;
else if(i%5==3) mod3_m++;
else mod4_m++;
}
cout << (mod1_n * mod4_m)+(mod2_n * mod3_m)+(mod3_n * mod2_m)+(mod4_n*mod1_m)+(mod5_n * mod5_m);
endl;
return ;
}
 
int32_t main()
{
    fastio();
    int t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}