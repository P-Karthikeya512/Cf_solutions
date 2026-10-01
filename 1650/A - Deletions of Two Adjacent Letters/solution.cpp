#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string s,t;
        cin >> s >> t;
        bool found = false;
        for(int i=0;i<s.size();i++){
            if(s[i]==t[0] && i%2==0) found = true; 
        }
        cout << (found ? "YES" :"NO") << endl;
    }
    return 0;
}