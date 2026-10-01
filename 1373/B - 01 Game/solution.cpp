#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int c_0 = count(s.begin(),s.end(),'0');
        int c_1 = count(s.begin(),s.end(),'1');
        if(min(c_0,c_1) & 1) cout << "DA
";
        else cout << "NET
";
    }
    return 0;
}