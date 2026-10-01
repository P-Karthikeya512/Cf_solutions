#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        if (!(((n+m-1)/m)+k >= n)) cout << "YES
";
        else cout << "NO
";
    }
    return 0;
}