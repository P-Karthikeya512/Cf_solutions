#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a>=b) cout << a << endl;
        else if(b >= 2*a) cout << 0 << endl;
        else{
            while(a!=b){
                a--;
                b-=2;
            }
            cout << a << endl;
        }
    }
    return 0;
}