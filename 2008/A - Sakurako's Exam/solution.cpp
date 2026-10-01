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
        if(a%2==0 && b%2==0) cout << "YES
";
        else if(a==2*b) cout << "YES
";
        else if(a!=0 && a%2==0 && b%2==1) cout << "YES
";
        else cout << "NO
";
    }
    return 0;
}