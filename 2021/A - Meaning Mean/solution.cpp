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
        vector<int>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        sort(v.begin(),v.end());
        int sum = v[0];
        for(int i=1;i<n;i++) sum = (sum+v[i])/2;
        cout << sum << endl;
    }
    return 0;
}