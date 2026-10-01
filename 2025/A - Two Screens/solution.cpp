#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    string s,x;
    cin >> s >> x;
    int c = 0 , n = min(s.size(),x.size());
    for(int i=0;i<n;i++){
        if(s[i]==x[i]) c++;
        else break;
    }
    if(c==0) cout << x.size()+s.size() << endl;
    else cout << x.size()+s.size()+1-c << endl;
}
 
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}