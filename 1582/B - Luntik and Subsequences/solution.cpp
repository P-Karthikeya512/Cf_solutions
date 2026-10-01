#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
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
        int c1 = count(v.begin(),v.end(),1);
        int c0 = count(v.begin(),v.end(),0);
        cout << c1*(1ll<<c0) << endl;
    }
    return 0;
}