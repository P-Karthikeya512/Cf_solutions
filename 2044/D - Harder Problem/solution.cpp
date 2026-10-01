#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int>b(n);
        vector<int>s(2*1e5+1);
        for(int i=0;i<2*1e5+1;i++) s[i] = 0;
        for(int i=0;i<n;i++) {
            if(s[a[i]]==0) {
                s[a[i]]++;
                b[i] = a[i];
            }
        }
        int k = 1;
        while(s[k]!=0) k++;
        for(int i=0;i<n;i++) {
            if(b[i]==0) {
                b[i] = k;
                k++;
                while(s[k]!=0) k++;
            }
        }
        for(int i=0;i<n;i++) cout<<b[i]<<' ';
        cout<<'
';
}
 
int main() {
    int t; 
    cin>>t;
    while(t--) solve();
    return 0;
}