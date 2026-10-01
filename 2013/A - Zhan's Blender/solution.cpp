#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,x,y;
        cin >> n >> x >> y;
        if(n % min(x,y) == 0) cout << n/min(x,y) << endl;
        else cout << (n/min(x,y)) + 1 << endl;
    }
    return 0;
}