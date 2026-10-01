#include<bits/stdc++.h>
using namespace std;
 
long long binexp(long long x, long long p, long long m){
    long long res = 1;
    x %= m;
    if(x==0) return 0;
    while(p>0){
        if(p & 1) res = ((res%m)*(x%m))%m;
        p = p>>1;
        x = ((x%m)*(x%m))%m;
    }
    return res;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        long long x = binexp(n,k,1e9+7);
        cout << x << endl;
    }
    return 0;
}