#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        sort(v.begin(),v.end());
        long long maxi=v[n-1],mini=v[0];
        if(maxi-mini == 0) cout << n*(n-1) << endl;
        else{
            long long max_count = count(v.begin(),v.end(),maxi);
            long long min_count = count(v.begin(),v.end(),mini);
            cout << 2*max_count*min_count << endl;
        } 
    }
    return 0;
}