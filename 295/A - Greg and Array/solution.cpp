#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<long long>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    vector<long long>l(m),r(m),d(m);
    for(int i=0;i<m;i++) cin >> l[i] >> r[i] >> d[i];
    for(int i=0;i<m;i++){
        l[i]--;r[i]--;
    }
    vector<long long>diffarr1(m+1);
    while(k--){
        int x,y;
        cin >> x >> y;
        diffarr1[x-1]++;
        diffarr1[y]--;
    }
    for(int i=1;i<m+1;i++) diffarr1[i] += diffarr1[i-1];
    for(int i=0;i<m;i++) d[i] = d[i]*diffarr1[i];
    vector<long long>diffarr2(n+1);
    int i = 0;
    while(i<m){
        diffarr2[l[i]] += d[i];
        diffarr2[r[i]+1] -= d[i];
        i++;
    }
    for(int i=1;i<n+1;i++) diffarr2[i] += diffarr2[i-1];
    for(int i=0;i<n;i++) v[i] += diffarr2[i];
    for(int i=0;i<n;i++) cout << v[i] << " ";
    cout << '
';
    return 0;
}