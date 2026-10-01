#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long y = sqrtl(n);
        n += y;
        if((int)sqrtl(n) > y) cout << n+1 << endl;
        else cout << n << endl;
    }
    return 0;
}