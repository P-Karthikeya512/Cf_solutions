#include<bits/stdc++.h>
using namespace std;
 
void fast(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve(){
  int n,x;
  cin >> n;
  vector<int>v(n);
  for(int i=0;i<n;i++) cin >> v[i];
  map<int,int>m;
  for(int i:v) m[i]++;
  bool found = false;
  for(auto it=m.begin();it!=m.end();it++){
    if(it->second >= 3) {
        found = true;
        x= it->first;
        break;
    }
  }
  if(found) cout << x << endl;
  else cout << -1 << endl;
}
 
int main(){
    fast();
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}