#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long n,m;
        cin >>n >>m;
        long long sum =0, maxi = 0 , mini = 1e9;
        for(int i=0;i<n;i++){
            long long x;
            cin >> x;
            sum+=x; 
            maxi = max(maxi,x); 
            mini = min(mini,x);
        }
        if(n+sum-mini+maxi <= m) cout << "YES
";
        else cout << "NO
";
    }
    return 0;
}