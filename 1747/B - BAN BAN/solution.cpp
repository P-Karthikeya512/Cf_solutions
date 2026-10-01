#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        (n & 1) ? (cout << (n/2)+1 << endl) : (cout << (n/2) << endl);
        int l = 1, r = 3*n ;
        while(l<r ){
            cout << l << " " << r << endl;
            l+=3;
            r-=3;
        }
    }
    return 0;
}