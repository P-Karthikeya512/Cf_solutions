#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;cin >> t;
    while(t--){
        long long n,q;
        cin >> n >> q;
        vector<long long>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        map<long long, long long>m;
        for(long long i=0;i<n;i++){
            long long s = (i+1)*(n-i) -1;
            m[s]++;
        }
        for(long long i=1;i<n;i++){
            long long s = (i)*(n-i);
            long long r = v[i]-v[i-1]-1;
            m[s] += r;
        }
        while(q--){
            long long x;
            cin >> x;
            cout << m[x] << " ";
        }
        cout << '
';
    }
    return 0;
}