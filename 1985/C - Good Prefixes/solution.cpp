#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        long long sum = 0,md =0,ans=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
            md=max(md,v[i]);
            if(sum-md==md) ans++;
        } 
        cout << ans << endl;
    }
    return 0;
}