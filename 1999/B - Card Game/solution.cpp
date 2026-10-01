#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a1,b1,a2,b2,c=0;
        cin >> a1 >> a2 >> b1 >> b2;
        if((a1>b1 && a2>b2) || (a1==b1 && a2 > b2) || (a2==b2 && a1 > b1)) c++;
        if((a1>b2 && a2>b1) || (a1==b2 && a2 > b1) || (a2==b1 && a1 > b2)) c++;
        cout << 2*c << endl;
    }
    return 0;
}