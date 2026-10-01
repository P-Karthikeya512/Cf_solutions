#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        unordered_map<int,int> fir, sec;
        fir[v[0]]++;
        int ans = 1;
        for(int i=1;i<n;i++){
            if(fir.count(v[i])) fir.erase(v[i]);
            sec[v[i]]++;
            if(fir.empty()){
                fir = sec;
                sec.clear();
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0LL;
}