#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int x= s.length();
        if(s[0]!='1' || s[1]!='0') cout << "NO
";
        else if((s[2]=='0' && x >= 3) ||(s[2]=='1' && x==3) ||(x<=2)) cout << "NO
";
        else cout << "YES
";
    }
    return 0;
}