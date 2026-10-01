#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int x;
    cin >> x;
    if(x & x-1 == 0) cout << 1 << endl;
    else{
        int ans = 0;
        while(x!=1){
            ans += (x%2);
            x /= 2;
        }
        ans += x;
        cout << ans << endl;
    }
    return 0; 
}