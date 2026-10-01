#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x,m;
        cin >> x >> m;
        long long y = 1, ans = 0;
        while(y<=min(2ll*x,m)){
            if(x!=y && ((x%(x^y))==0 || (y%(x^y))==0)) ans++;
            y++;
        }
        cout << ans << endl;
    }
    return 0;
}