#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        char a;
        cin >> a;
        bool found = false;
        string s = "codeforces";
        for(int i=0;i<s.size();i++){
            if(s[i]==a){
                found = true ;
                break;
            }
        }
        if(found) cout << "YES
";
        else cout << "NO
";
    }
    return 0;
}