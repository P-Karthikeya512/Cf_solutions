#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,a=1;
        cin >> n;
        while(n--){
            a+=3;
            cout << a << " " ;
        }
        cout << endl;
    }
    return 0;
}