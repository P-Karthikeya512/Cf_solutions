#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b,m;
        cin >> a >> b >> m;
        long long x = (m/a)+(m/b)+2;
        cout << x << endl;
    }
    return 0;
}