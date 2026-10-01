#include<bits/stdc++.h>
using namespace std;
 
bool cmp(pair<int,int>a, pair<int,int>b){
    return a.second > b.second;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        pair<int,int>bc[k];
        for(int i=0;i<k;i++){
            cin >> bc[i].first >> bc[i].second; 
        }
        vector<int>b(k,0);
        for(int i=0;i<k;i++){
            b[bc[i].first -1] += bc[i].second;
        }
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
        int ans =0;
        if(n>=k){
            for(int i=0;i<k;i++) ans += b[i];
            cout << ans << endl;
        }else{
            for(int i=0;i<n;i++) ans += b[i];
            cout << ans << endl;
        }
    }
    return 0;
}