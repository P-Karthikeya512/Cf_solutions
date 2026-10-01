#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int l,r,ans=0;
        cin >> l >> r;
        for(int i=l;i<r+1-2;i++){
            if(i%2==0) continue;
            ans++;
            i=i+3;
        }
        cout << ans << endl;
    }
    return 0;
}