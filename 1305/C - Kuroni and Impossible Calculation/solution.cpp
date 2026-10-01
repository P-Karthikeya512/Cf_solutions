#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n , m;
    cin >> n >> m;
    vector<long long>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    if(n>m) cout << 0 << endl;
    else{
        long long i=0;
        long long product = 1;
        while(i<n-1){
            long long j=i+1;
            while(j<n){
                product*=abs(v[i]-v[j]);
                product%=m;
                if(product==0){
                    cout << 0 << endl;
                    return 0;
                }
                j++;
            }
            i++;
        }
        cout << product << endl;
    }
    return 0;
}