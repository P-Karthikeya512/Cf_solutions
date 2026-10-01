#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = count(s.begin(),s.end(),'s');
    int b = count(s.begin(),s.end(),'p');
    int c = count(s.begin(),s.end(),'.');
    if(a==0 || b==0) cout << "YES
";
    else{
        if(a==1 || b==1){
            if(a==1&&b!=1){
                if(s[0]=='s') cout << "YES
";
                else cout << "NO
";
            }
            if(b==1&&a!=1){
                if(s[n-1]=='p') cout << "YES
";
                else cout << "NO
";
            }
            if(b==1&&a==1){
                if(s[0]=='s' || s[n-1]=='p') cout << "YES
";
                else cout << "NO
";
            }
        }
        else cout << "NO
";
    }
}
 
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}