#include<bits/stdc++.h>
using namespace std;
 
long long binpower(long long x, long long n , long long m){
    int ans = 1;
    while(n!=0){
        if(n&1){
            ans = ((ans%m)*(x%m))%m;
        }
        x = ((x%m)*(x%m))%m;
        n/=2;
    }
    return ans;
}
 
int main(){
    int n;
    cin >> n;
    vector<long long>v(n),c(n);
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<n;i++) cin >> c[i];
    long long m = 1e9+7;
    for(int i=0;i<n;i++) cout << binpower(2,c[i],m) << endl;
    return 0;
}