#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        long long i=1,ans=0,m=0;
        while(i<n){
            if(v[i]<v[i-1]){
                long long diff = (v[i-1]-v[i]);
                m=max(m,diff);
                v[i] += diff;
                ans += diff;
            }
            i++;
        }
        if(ans==0) cout << 0 << endl;
        else cout << ans+m << endl;
    }
    return 0;
}