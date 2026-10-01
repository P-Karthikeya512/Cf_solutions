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
        if(n == 1) {
            cout << 1 << '
';
            continue;
        }
        if(n % 2 == 0 ) cout << -1 << endl;
        else{
            vector<int>v(n);
            v[n/2 + 1] = 2;
            v[0] = n;
            for(int i = n/2 + 2; i<n;i++) v[i]=v[i-1]+2;
            for(int i = 1;i<n/2 + 1;i++) v[i] = v[i-1]-2;
            for(int i=0;i<n;i++) cout << v[i] << " ";
            cout << endl;
        }
    }
    return 0;
}