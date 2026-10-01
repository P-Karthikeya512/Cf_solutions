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
int n;get n;
vi v(n);read(v);
if(n==1){
cout << 0<<'
';
return;
}
int s,e,ptr1,ptr2;
bool f1,f2;
ptr1=0;ptr2=n-1;
s=v[ptr1];e=v[ptr2];
f1=true;f2=true;
while(f1||f2){
if(ptr1!=n-1 and v[ptr1]==s) ptr1++;
else f1 = false;
if(ptr2!=0 and v[ptr2]==e) ptr2--;
else f2 = false;
}
if(s==e) cout << max(0ll,(ptr2-ptr1)+1)<< '
';
else cout << n-max(ptr1,abs(n-ptr2)-1) << '
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