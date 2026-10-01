#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        bool found = true,back=true;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                found=false;  
            }
            if(a[i]!=b[n-1-i]){
                back=false;   
            }
        }
        if(found || back) cout << "Bob
";
        else cout << "Alice
";
    }
    return 0;
}