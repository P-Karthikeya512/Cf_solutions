#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,k;
        cin >> x >> y >> k;
        if(y<x) cout << x << endl;
        else cout << y + max(0,(y-x-k)) << endl;
    }
    return 0;
}