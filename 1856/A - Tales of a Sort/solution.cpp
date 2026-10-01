#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long>a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        long long ans =0;
        for(int i=0;i<n-1;i++){
            if(a[i] > a[i+1]) ans = max(ans,a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}