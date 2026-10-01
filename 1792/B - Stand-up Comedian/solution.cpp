#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a==0) cout << 1 << endl;
        else cout << a+2*min(b,c)+min(a+1,abs(b-c)+d) << endl;
    }
    return 0;
}