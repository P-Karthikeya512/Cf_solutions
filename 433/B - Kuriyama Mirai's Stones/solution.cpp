#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    vector<long long>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    vector<long long>u = v;
    sort(u.begin(),u.end());
    vector<long long>prefix1(n),prefix2(n);
    prefix1[0]=v[0];
    prefix2[0]=u[0];
    for(int i=1;i<n;i++){
        prefix1[i] = (v[i]+prefix1[i-1]);
        prefix2[i] = (u[i]+prefix2[i-1]);
    }
    long long m;
    cin >> m;
    while(m--){
        long long type,l,r;
        cin >> type >> l >> r;
        l--;r--;
        if(type == 1) cout << prefix1[r]-((l==0)?0:prefix1[l-1]) << "
";
        else cout << prefix2[r]-((l==0)?0:prefix2[l-1]) << '
';
    }
    return 0;
}