#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    cin >> n >> m;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    vector<int>diff(n);
    while(m--){
        int l,r;
        cin >> l >> r;
        l--;r--;
        diff[l]++;
        if(r<n-1) diff[r+1] -= 1;
    }
    long long ans = 0;
    for(int i=1;i<n;i++) diff[i] += diff[i-1];
    sort(diff.begin(),diff.end());
    for(int i=0;i<n;i++){
        ans += (diff[i] *1ll*v[i]);
    }
    cout << ans << endl;
    return 0;
}