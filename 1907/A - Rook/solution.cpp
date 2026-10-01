#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(int i=1;i<9;i++){
            if((s[1]-'0')!=i) cout << s[0] << i <<endl;
            else continue;
        }
        for(int i=97;i<=104;i++){
            if(s[0]!=i) cout << char(i) << s[1] << endl;
            else continue;
        }
    }
    return 0;
}