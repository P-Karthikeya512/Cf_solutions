#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,sum=0;
        cin >> n;
        vector<long long>v(n);
        for(long long i=0;i<n;i++) cin >> v[i];
        for(long long i=0;i<n;i++) sum+=v[i];
        sort(v.begin(),v.end());
        if(n<3) cout << -1 << endl;
        else cout << max(0LL,2*n*v[n/2]-sum+1) << endl;
    }
    return 0;
}