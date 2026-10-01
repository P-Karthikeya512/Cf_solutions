#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,y=0;
        cin >> n;
        vector<int>a(n),v(n+3,0);
        for(int i=0;i<n;i++) cin >> a[i];
        bool found = false;
        for(int i=0;i<n;i++){
            v[a[i]]=1;
            if(i!=0 && (v[a[i]-1]==0 && v[a[i]+1]==0)){
                found=true;
            }
        }
        if(found) cout << "NO
";
        else cout << "YES
";
    }
    return 0;
}