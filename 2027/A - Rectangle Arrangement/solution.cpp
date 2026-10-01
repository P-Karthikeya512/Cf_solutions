#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,mw=0,mh=0;
        cin >> n;
        for(int i=0;i<n;i++){
            int a,b;
            cin >> a >> b;
            mw=max(mw,a);
            mh=max(mh,b);
        }
        cout << 2*(mw+mh) << endl;
    }
    return 0;
}