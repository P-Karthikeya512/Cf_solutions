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
        long long ans = 1;
        for(int i=1;i*i<=n;i++){
            if(n%i==0) {
                if(i<=(n/2)) ans = max(ans,(long long)i);
                if(n/i <= n/2) ans = max(ans,(long long)n/i);
            }
        }
        cout << ans << " "<< n-ans << endl;
    }
    return 0;
}