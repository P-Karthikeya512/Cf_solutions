#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long n,sum =0;
        cin >> n;
        vector<long long>v(n);
        for(long long i=0;i<n;i++) cin >> v[i];
        for(long long i=0;i<n;i++){
            if(i==n-2) sum-=v[i];
            else sum+=v[i];
        }
        cout << sum << endl;
    }
    return 0;
}