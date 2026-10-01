#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;
        int L , R;
        cin >> L >> R;
        if(l==L && r==R) cout << (r-l) << endl;
        else if(l==L && r!=R) cout << min(r,R)-l+1 << endl;
        else if(r==R && l!=L) cout << r-max(l,L)+1 << endl;
        else if(r<L || R<l) cout << 1 << endl;
        else cout << min(R,r)-max(L,l)+2 << endl;
    }
    return 0;
}