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
        map<int,int>m;
        for(int i : v) m[i]++;
        int maxi=0;
        for(auto it = m.begin();it!=m.end();++it){
            if(it->second > maxi) maxi = it->second;
        }
        if(maxi==n) cout << 0 << endl;
        else cout << n-maxi << endl;
    }
    return 0;
}