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
int n,k,x;
get n;get k;get x;
vi v(n);read(v);
int sum = accumulate(all(v),0LL);
if(k*sum < x){
cout << 0 << '
';
return;
}
if(sum>=x){
reverse(all(v));
vi pre(n);
pre[0] =v[0];
rep(i,1,n) pre[i] = pre[i-1]+v[i];
int id = 0;
rep(i,0,n) if(pre[i]<x) id++;
cout << n*(k)-(id) << '
';
return;
}
int c = x/sum;
int r = x%sum;
int s = 0,i = n-1,count = 0;
while(i>=0 and s < r){
s+=v[i];
i--;
count++;
}
cout << n*k - c*n - count + 1 << '
';
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