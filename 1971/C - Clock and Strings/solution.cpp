#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int g = (a-c)*(a-d),f=(b-c)*(b-d);
        if(g*f < 0) cout << "YES
";
        else cout << "NO
";
    }
    return 0;
}