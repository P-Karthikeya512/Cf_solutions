#include <bits/stdc++.h>
using namespace std;
#define int long long
 
 
void solve(){
int n,k;
cin >> n >> k;
vector<int>l(n),r(n);
for(int i=0;i<n;i++) cin >> l[i];
for(int i=0;i<n;i++) cin >> r[i];
int compul_tiyy = 0;
vector<int>seco_cha;
for(int i=0;i<n;i++){
compul_tiyy += max(l[i],r[i]);
seco_cha.push_back(min(l[i],r[i]));
}
sort(seco_cha.begin(),seco_cha.end(),greater<int>());
vector<int> pre(n+1,0);
for(int i=1;i<=n;i++) pre[i] = pre[i-1] + seco_cha[i-1];
int lo = 1, hi = compul_tiyy + pre[k-1] + 1;
while(lo < hi){
int mid = lo + (hi-lo)/2;
if(mid > compul_tiyy + pre[k-1]) hi = mid;
else lo = mid +1;
}
cout << lo << endl;
}
 
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
       solve();
    }
}